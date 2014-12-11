// hardware.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "hardware.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// hardware dialog


hardware::hardware(CWnd* pParent /*=NULL*/)
	: CDialog(hardware::IDD, pParent)
{
	//{{AFX_DATA_INIT(hardware)
	//}}AFX_DATA_INIT
}


void hardware::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(hardware)
	DDX_Control(pDX, IDC_QUESTION, m_que);
	DDX_Control(pDX, IDC_QNO, m_qno);
	DDX_Control(pDX, IDC_OPTION4, m_opt4);
	DDX_Control(pDX, IDC_BUTTON2, m_result);
	DDX_Control(pDX, IDC_BUTTON1, m_next);
	DDX_Control(pDX, IDC_OPTION3, m_opt3);
	DDX_Control(pDX, IDC_OPTION2, m_opt2);
	DDX_Control(pDX, IDC_OPTION1, m_opt1);
	DDX_Control(pDX, IDC_LABEL1, m_timer);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(hardware, CDialog)
	//{{AFX_MSG_MAP(hardware)
	ON_BN_CLICKED(IDC_OPTION1, OnOption1)
	ON_BN_CLICKED(IDC_OPTION2, OnOption2)
	ON_BN_CLICKED(IDC_OPTION3, OnOption3)
	ON_BN_CLICKED(IDC_OPTION4, OnOption4)
	ON_BN_CLICKED(IDC_BUTTON1, OnNext)
	ON_BN_CLICKED(IDC_BUTTON2, OnResult)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_BUTTON3, OnQuit)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// hardware message handlers

BOOL hardware::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	db.OpenEx(_T("DSN=quiz_dsn;UID=admin"),CDatabase::noOdbcDialog);
	rs=new CRecordset(&db);
	rs->Open(CRecordset::dynaset,_T("select * from hw_tb"),CRecordset::none);
	
	db.ExecuteSQL("update hw_tb set user_ans=0"); 
		
	showQNo();

//	qdlg.tb_name="gk_tb";

//	MessageBox("connection done");

	display();

	DisableNextButton();
	m_result.EnableWindow(false);

	min=10;
	sec=0;
	SetTimer(4,500,NULL); 	  //500

	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void hardware::OnOption1() 
{
	m_opt2.SetCheck(0);
	m_opt3.SetCheck(0);
	m_opt4.SetCheck(0);

	uans=1;
	//InsertAnswer(uans);

	EnableNextButton();
	
}

void hardware::OnOption2() 
{
	// TODO: Add your control notification handler code here
		m_opt1.SetCheck(0);
	m_opt3.SetCheck(0);
	m_opt4.SetCheck(0);
	
	uans=2;
	//InsertAnswer(uans);

	EnableNextButton();

}

void hardware::OnOption3() 
{
	m_opt1.SetCheck(0);
	m_opt2.SetCheck(0);
	m_opt4.SetCheck(0);

	uans=3;
	//InsertAnswer(uans);

	EnableNextButton();		
}

void hardware::OnOption4() 
{
	m_opt1.SetCheck(0);
	m_opt2.SetCheck(0);
	m_opt3.SetCheck(0);	

	uans=4;
	//InsertAnswer(uans);

	EnableNextButton();
	
}

void hardware::display()
{
	 CString q1,o1,o2,o3,o4;

	rs->GetFieldValue("question",q1);
	m_que.SetWindowText(q1);

	rs->GetFieldValue("option1",o1);
	m_opt1.SetWindowText(o1);

	rs->GetFieldValue("option2",o2);
	m_opt2.SetWindowText(o2);

	rs->GetFieldValue("option3",o3);
	m_opt3.SetWindowText(o3);

	rs->GetFieldValue("option4",o4);
	m_opt4.SetWindowText(o4);

}

void hardware::showQNo()
{
	CString str;
	str.Format("Question : %d",rs->GetRecordCount());
	m_qno.SetWindowText(str);

}

void hardware::DisableNextButton()
{
	 m_next.EnableWindow(false);
}

void hardware::EnableNextButton()
{
	 if(rs->GetRecordCount()==10)
	{
		m_result.EnableWindow(true);
	}
	else 
	{
		 m_next.EnableWindow(true);
	 // InsertAnswer(uans);
	}

}

void hardware::OnNext() 
{
	InsertAnswer(uans);
	
	UnCheckAll();
	DisableNextButton();

	rs->MoveNext();
	showQNo();
	
	if(rs->IsEOF())
	{
		DisableNextButton();

		rs->Close();
		db.Close();	
	}
	else
		display(); 	
}

void hardware::InsertAnswer(int ans)
{
	CString temp1,temp2;

	rs->GetFieldValue("qno",temp1);

	temp2.Format("%d",ans);

	db.ExecuteSQL("Update hw_tb set user_ans="+ temp2 +" where qno="+ temp1 +";");

}

void hardware::UnCheckAll()
{
	 m_opt1.SetCheck(0);
	m_opt2.SetCheck(0);
	m_opt3.SetCheck(0);
	m_opt4.SetCheck(0);
}

void hardware::OnResult() 
{
	UpdateData(true);
	
	progress_bar pbar;
	pbar.tb_name="hw_tb";

	InsertAnswer(uans);
	hardware::EndDialog(0);
	
	
	pbar.DoModal();
	
	UpdateData(false);
	
}

void hardware::OnTimer(UINT nIDEvent) 
{
		
	UpdateData(true);

	//MessageBox("hello");
	
	if(sec>0)
		sec=sec-1;
	else
	{	
		sec=59;
		min=min-1;
	}

	CString str;
	str.Format("%d : %d",min,sec);
	m_timer.SetWindowText(str);
	
	if(min==0 && sec==0)
	{
		KillTimer(4);
		MessageBox("Sorry! Your time's up.");
		
		m_opt1.EnableWindow(false);
		m_opt2.EnableWindow(false);
		m_opt3.EnableWindow(false);
		m_opt4.EnableWindow(false);

		m_result.EnableWindow(true);
	}


	CDialog::OnTimer(nIDEvent);

	UpdateData(false);

}

void hardware::OnQuit() 
{
	int i=MessageBox("Are you sure you want to quit?","Quit",MB_OKCANCEL);
	if(i==1)
		hardware::EndDialog(0);
	else
		;	
}
