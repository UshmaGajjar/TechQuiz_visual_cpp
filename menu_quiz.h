#if !defined(AFX_MENU_QUIZ_H__3792DF51_8A43_4346_A64D_33051FBF22C6__INCLUDED_)
#define AFX_MENU_QUIZ_H__3792DF51_8A43_4346_A64D_33051FBF22C6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// menu_quiz.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// menu_quiz dialog

class menu_quiz : public CDialog
{
// Construction
public:
	menu_quiz(CWnd* pParent = NULL);   // standard constructor
	int n;
// Dialog Data
	//{{AFX_DATA(menu_quiz)
	enum { IDD = IDD_DIALOG7 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(menu_quiz)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(menu_quiz)
	afx_msg void OnOk();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENU_QUIZ_H__3792DF51_8A43_4346_A64D_33051FBF22C6__INCLUDED_)
