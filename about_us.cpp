// about_us.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "about_us.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// about_us dialog


about_us::about_us(CWnd* pParent /*=NULL*/)
	: CDialog(about_us::IDD, pParent)
{
	//{{AFX_DATA_INIT(about_us)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void about_us::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(about_us)
	DDX_Control(pDX, IDC_SHOCKWAVEFLASH1, m_1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(about_us, CDialog)
	//{{AFX_MSG_MAP(about_us)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// about_us message handlers



BOOL about_us::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_1.SetMovie("G:\\Quiz\\swf\\galaxy.swf");
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}
