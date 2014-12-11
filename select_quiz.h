#if !defined(AFX_SELECT_QUIZ_H__49B546AF_D5FB_4CA7_82F8_7AE66C8968F2__INCLUDED_)
#define AFX_SELECT_QUIZ_H__49B546AF_D5FB_4CA7_82F8_7AE66C8968F2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// select_quiz.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// select_quiz dialog

class select_quiz : public CDialog
{
// Construction
public:
	select_quiz(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(select_quiz)
	enum { IDD = IDD_DIALOG6 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(select_quiz)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(select_quiz)
	afx_msg void OnC();
	afx_msg void OnJava();
	afx_msg void OnHardware();
	afx_msg void OnAptitude();
	afx_msg void OnGk();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SELECT_QUIZ_H__49B546AF_D5FB_4CA7_82F8_7AE66C8968F2__INCLUDED_)
