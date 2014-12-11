// progress_bar.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "progress_bar.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include "GKDlg.h"
#include "afxdb.h"
#include "result.h"

/////////////////////////////////////////////////////////////////////////////
// progress_bar dialog


progress_bar::progress_bar(CWnd* pParent /*=NULL*/)
	: CDialog(progress_bar::IDD, pParent)
{
	//{{AFX_DATA_INIT(progress_bar)
	//}}AFX_DATA_INIT
}


void progress_bar::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(progress_bar)
	DDX_Control(pDX, IDC_PROGRESS1, m_pbar);
	DDX_Control(pDX, IDC_LABEL1, m_message);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(progress_bar, CDialog)
	//{{AFX_MSG_MAP(progress_bar)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// progress_bar message handlers

BOOL progress_bar::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	i=1;
	m_pbar.SetPos(i);

	SetTimer(2,100,NULL);
	
	//MessageBox(tb_name);
	

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

void progress_bar::OnTimer(UINT nIDEvent) 
{
	UpdateData(true);
	 int n;
	if(i<=100)
	{
		m_pbar.SetPos(i);
		
		n=m_pbar.GetPos();
		//m_pbarvalue=n; 
		i++;
	}
	if(n>75)
		m_message.SetCaption("Preaparing result....");
	else if(n>25)
		m_message.SetCaption("Analyzing input....");

	if(n==100)
	{
		KillTimer(2);
		cal_result();
	}

	UpdateData(false);
	CDialog::OnTimer(nIDEvent);
}


void progress_bar::cal_result()
{
	UpdateData(true);

	CDatabase db;
	CRecordset *rs;
	result r;

	int correct=0,incorrect=0; 
	CString s1,s2;
	
	db.OpenEx(_T("DSN=quiz_dsn;UID=admin"),CDatabase::noOdbcDialog);
	rs=new CRecordset(&db);
	rs->Open(CRecordset::dynaset,_T("select * from "+ tb_name+";"),CRecordset::none);
	//MessageBox("connection done!" );

	while(rs->IsEOF() == false)
	{  
		rs->GetFieldValue("correct_ans",s1);
		rs->GetFieldValue("user_ans",s2);

		if(s1.Compare(s2)==0)
			correct++;
		else
			incorrect++;

		rs->MoveNext();
	} 
/*	s1.Format("%d-%d",correct,incorrect);
	s2.Format("%d",s2);*/	 

//	MessageBox(s1+s2);
	r.m_total=10;
	r.m_correct=correct;
	r.m_incorrect=incorrect;	

	progress_bar::EndDialog(0);

	r.tb_name=tb_name;
	r.DoModal();

	UpdateData(false);
}
