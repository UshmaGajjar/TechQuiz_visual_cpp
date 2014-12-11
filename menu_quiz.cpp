// menu_quiz.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "menu_quiz.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include "GKDlg.h"
#include "aptitude.h"
#include "hardware.h"
#include "langjava.h"
#include "langc.h"
/////////////////////////////////////////////////////////////////////////////
// menu_quiz dialog


menu_quiz::menu_quiz(CWnd* pParent /*=NULL*/)
	: CDialog(menu_quiz::IDD, pParent)
{
	//{{AFX_DATA_INIT(menu_quiz)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void menu_quiz::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(menu_quiz)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(menu_quiz, CDialog)
	//{{AFX_MSG_MAP(menu_quiz)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// menu_quiz message handlers

BEGIN_EVENTSINK_MAP(menu_quiz, CDialog)
    //{{AFX_EVENTSINK_MAP(menu_quiz)
	ON_EVENT(menu_quiz, IDC_COMMANDBUTTON1, -600 /* Click */, OnOk, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void menu_quiz::OnOk() 
{
	
	if(n==1)
	{
		menu_quiz::EndDialog(0);
		langc lc;
		lc.DoModal();
	}
	if(n==2)
	{
		menu_quiz::EndDialog(0);
		langjava lj;
		lj.DoModal();
	}
	if(n==3)
	{
		menu_quiz::EndDialog(0);
		hardware hw;
		hw.DoModal();
	}
	if(n==4)
	{
		menu_quiz::EndDialog(0);
		aptitude apt;
		apt.DoModal();
	}
	if(n==5)
	{
		menu_quiz::EndDialog(0);
		GKDlg gk;
		gk.DoModal();
	}


	// TODO: Add your control notification handler code here
	
}
