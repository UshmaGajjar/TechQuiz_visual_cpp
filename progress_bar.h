//{{AFX_INCLUDES()
#include "labelcontrol.h"
//}}AFX_INCLUDES
#if !defined(AFX_PROGRESS_BAR_H__21A91165_24EA_448F_B271_D78EA0230283__INCLUDED_)
#define AFX_PROGRESS_BAR_H__21A91165_24EA_448F_B271_D78EA0230283__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// progress_bar.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// progress_bar dialog

class progress_bar : public CDialog
{
// Construction
public:
	void cal_result();
	CString tb_name;
	progress_bar(CWnd* pParent = NULL);   // standard constructor
	int i;
	
// Dialog Data
	//{{AFX_DATA(progress_bar)
	enum { IDD = IDD_PBAR };
	CProgressCtrl	m_pbar;
	CLabelControl	m_message;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(progress_bar)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(progress_bar)
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROGRESS_BAR_H__21A91165_24EA_448F_B271_D78EA0230283__INCLUDED_)
