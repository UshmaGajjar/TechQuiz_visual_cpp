//{{AFX_INCLUDES()
#include "labelcontrol.h"
#include "crystalctrl.h"
#include "shockwaveflash.h"
//}}AFX_INCLUDES
#if !defined(AFX_RESULT_H__E0E7BB85_60DA_4487_8A4C_39F4324DBAC3__INCLUDED_)
#define AFX_RESULT_H__E0E7BB85_60DA_4487_8A4C_39F4324DBAC3__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// result.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// result dialog

class result : public CDialog
{
// Construction
public:
	result(CWnd* pParent = NULL);   // standard constructor
	CString tb_name;

// Dialog Data
	//{{AFX_DATA(result)
	enum { IDD = IDD_RESULT };
	int		m_total;
	int		m_correct;
	int		m_incorrect;
	CCrystalCtrl	m_report;
	CShockwaveFlash	m_1;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(result)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(result)
	afx_msg void OnOk();
	afx_msg void OnResult();
	virtual BOOL OnInitDialog();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_RESULT_H__E0E7BB85_60DA_4487_8A4C_39F4324DBAC3__INCLUDED_)
