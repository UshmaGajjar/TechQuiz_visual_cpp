// select_quiz.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "select_quiz.h"

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
// select_quiz dialog


select_quiz::select_quiz(CWnd* pParent /*=NULL*/)
	: CDialog(select_quiz::IDD, pParent)
{
	//{{AFX_DATA_INIT(select_quiz)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void select_quiz::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(select_quiz)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(select_quiz, CDialog)
	//{{AFX_MSG_MAP(select_quiz)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// select_quiz message handlers

BEGIN_EVENTSINK_MAP(select_quiz, CDialog)
    //{{AFX_EVENTSINK_MAP(select_quiz)
	ON_EVENT(select_quiz, IDC_COMMANDBUTTON1, -600 /* Click */, OnC, VTS_NONE)
	ON_EVENT(select_quiz, IDC_COMMANDBUTTON2, -600 /* Click */, OnJava, VTS_NONE)
	ON_EVENT(select_quiz, IDC_COMMANDBUTTON3, -600 /* Click */, OnHardware, VTS_NONE)
	ON_EVENT(select_quiz, IDC_COMMANDBUTTON4, -600 /* Click */, OnAptitude, VTS_NONE)
	ON_EVENT(select_quiz, IDC_COMMANDBUTTON5, -600 /* Click */, OnGk, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void select_quiz::OnC() 
{
	langc lc;
	select_quiz::EndDialog(0);
	lc.DoModal();
	// TODO: Add your control notification handler code here	
}

void select_quiz::OnJava() 
{	
	langjava lj;
	select_quiz::EndDialog(0);
	lj.DoModal();
	// TODO: Add your control notification handler code here	
}

void select_quiz::OnHardware() 
{
	// TODO: Add your control notification handler code here
	hardware hw;
	select_quiz::EndDialog(0);
	hw.DoModal();
}

void select_quiz::OnAptitude() 
{
	// TODO: Add your control notification handler code here
	aptitude apt;
	select_quiz::EndDialog(0);
	apt.DoModal();
}

void select_quiz::OnGk() 
{
	// TODO: Add your control notification handler code here
	GKDlg gk;
	select_quiz::EndDialog(0);
	gk.DoModal();
}
