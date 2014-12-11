//{{AFX_INCLUDES()
#include "labelcontrol.h"
//}}AFX_INCLUDES
#if !defined(AFX_LANGC_H__AE896289_4E0A_475F_82F3_1B7E6295E038__INCLUDED_)
#define AFX_LANGC_H__AE896289_4E0A_475F_82F3_1B7E6295E038__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "afxdb.h"
#include "progress_bar.h"
// langc.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// langc dialog

class langc : public CDialog
{
// Construction
public:
	void UnCheckAll();
	void EnableNextButton();
	void InsertAnswer(int ans);
	void DisableNextButton();
	void display();
	void showQNo();
	langc(CWnd* pParent = NULL);   // standard constructor

	progress_bar pbar;
	CDatabase db;
	CRecordset *rs;
	int uans;
	int min,sec;

// Dialog Data
	//{{AFX_DATA(langc)
	enum { IDD = IDD_DIALOG5 };
	CStatic	m_que;
	CButton	m_qno;
	CButton	m_opt4;
	CButton	m_opt3;
	CButton	m_opt2;
	CButton	m_opt1;
	CButton	m_result;
	CButton	m_next;
	CLabelControl	m_timer;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(langc)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(langc)
	afx_msg void OnOption1();
	afx_msg void OnNext();
	virtual BOOL OnInitDialog();
	afx_msg void OnOption2();
	afx_msg void OnOption3();
	afx_msg void OnOption4();
	afx_msg void OnResult();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnQuit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_LANGC_H__AE896289_4E0A_475F_82F3_1B7E6295E038__INCLUDED_)
