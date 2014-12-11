// instructions.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "instructions.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// instructions dialog


instructions::instructions(CWnd* pParent /*=NULL*/)
	: CDialog(instructions::IDD, pParent)
{
	//{{AFX_DATA_INIT(instructions)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void instructions::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(instructions)
	DDX_Control(pDX, IDC_SHOCKWAVEFLASH1, m_1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(instructions, CDialog)
	//{{AFX_MSG_MAP(instructions)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// instructions message handlers

BOOL instructions::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_1.SetMovie("G:\\Quiz\\swf\\everchanging_standby.swf");
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
