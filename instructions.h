//{{AFX_INCLUDES()
#include "shockwaveflash.h"
//}}AFX_INCLUDES
#if !defined(AFX_INSTRUCTIONS_H__09998055_B499_4217_9B35_736493B2C73D__INCLUDED_)
#define AFX_INSTRUCTIONS_H__09998055_B499_4217_9B35_736493B2C73D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// instructions.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// instructions dialog

class instructions : public CDialog
{
// Construction
public:
	instructions(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(instructions)
	enum { IDD = IDD_DIALOG8 };
	CShockwaveFlash	m_1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(instructions)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(instructions)
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INSTRUCTIONS_H__09998055_B499_4217_9B35_736493B2C73D__INCLUDED_)
