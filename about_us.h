//{{AFX_INCLUDES()
#include "shockwaveflash.h"
//}}AFX_INCLUDES
#if !defined(AFX_ABOUT_US_H__A3CB40D6_972F_4542_ADF7_D8EBDEE4D5F3__INCLUDED_)
#define AFX_ABOUT_US_H__A3CB40D6_972F_4542_ADF7_D8EBDEE4D5F3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// about_us.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// about_us dialog

class about_us : public CDialog
{
// Construction
public:
	about_us(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(about_us)
	enum { IDD = IDD_DIALOG9 };
	CShockwaveFlash	m_1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(about_us)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(about_us)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_ABOUT_US_H__A3CB40D6_972F_4542_ADF7_D8EBDEE4D5F3__INCLUDED_)
