// Quiz.h : main header file for the QUIZ application
//

#if !defined(AFX_QUIZ_H__63AA4401_1211_498E_AB43_21493FEF0FEC__INCLUDED_)
#define AFX_QUIZ_H__63AA4401_1211_498E_AB43_21493FEF0FEC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CQuizApp:
// See Quiz.cpp for the implementation of this class
//

class CQuizApp : public CWinApp
{
public:
	CQuizApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQuizApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CQuizApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUIZ_H__63AA4401_1211_498E_AB43_21493FEF0FEC__INCLUDED_)
