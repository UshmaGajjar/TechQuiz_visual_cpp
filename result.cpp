// result.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "result.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// result dialog


result::result(CWnd* pParent /*=NULL*/)
	: CDialog(result::IDD, pParent)
{
	//{{AFX_DATA_INIT(result)
	m_total = 0;
	m_correct = 0;
	m_incorrect = 0;
	//}}AFX_DATA_INIT
}


void result::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(result)
	DDX_Text(pDX, IDC_EDIT2, m_total);
	DDX_Text(pDX, IDC_EDIT3, m_correct);
	DDX_Text(pDX, IDC_EDIT4, m_incorrect);
	DDX_Control(pDX, IDC_CRYSTALREPORT1, m_report);
	DDX_Control(pDX, IDC_SHOCKWAVEFLASH1, m_1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(result, CDialog)
	//{{AFX_MSG_MAP(result)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// result message handlers

BEGIN_EVENTSINK_MAP(result, CDialog)
    //{{AFX_EVENTSINK_MAP(result)
	ON_EVENT(result, IDC_COMMANDBUTTON2, -600 /* Click */, OnOk, VTS_NONE)
	ON_EVENT(result, IDC_COMMANDBUTTON1, -600 /* Click */, OnResult, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()





void result::OnOk() 
{
	
	result::EndDialog(0);
}

void result::OnResult() 
{
	UpdateData(true);

	if(tb_name.Compare("gk_tb")==0)
	{
	//	MessageBox("gk report");
		m_report.SetReportFileName("G:\\Quiz\\reports\\General Knowledge-REPORT.rpt");
	}

	if(tb_name.Compare("c_tb")==0)
	{
		m_report.SetReportFileName("G:\\Quiz\\reports\\C Language - REPORT.rpt");
	}
	if(tb_name.Compare("aptitude_tb")==0)
	{
		m_report.SetReportFileName("G:\\Quiz\\reports\\aptitude_report.rpt");
	}
	if(tb_name.Compare("hw_tb")==0)
	{
		m_report.SetReportFileName("G:\\Quiz\\reports\\Hardware-REPORT.rpt");
	}
	if(tb_name.Compare("java_tb")==0)
	{
		m_report.SetReportFileName("G:\\Quiz\\reports\\Java-REPORT.rpt");
	}


	m_report.SetDiscardSavedData(true);
	m_report.SetAction(true);


	//MessageBox("report");
	UpdateData(false);
}

BOOL result::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_1.SetMovie("G:\\Quiz\\swf\\be_happy.swf");	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
