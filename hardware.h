//{{AFX_INCLUDES()
#include "labelcontrol.h"
//}}AFX_INCLUDES
#if !defined(AFX_HARDWARE_H__14AD88FF_C0BE_4842_8A2B_E32994232677__INCLUDED_)
#define AFX_HARDWARE_H__14AD88FF_C0BE_4842_8A2B_E32994232677__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// hardware.h : header file
//
#include "afxdb.h"
#include "progress_bar.h"
/////////////////////////////////////////////////////////////////////////////
// hardware dialog

class hardware : public CDialog
{
// Construction
public:
	void UnCheckAll();
	void InsertAnswer(int ans);
	void EnableNextButton();
	void DisableNextButton();
	void showQNo();
	void display();
	hardware(CWnd* pParent = NULL);   // standard constructor
	CDatabase db;
	CRecordset *rs;
	int uans,sec,min;

// Dialog Data
	//{{AFX_DATA(hardware)
	enum { IDD = IDD_DIALOG3 };
	CStatic	m_que;
	CButton	m_qno;
	CButton	m_opt4;
	CButton	m_result;
	CButton	m_next;
	CButton	m_opt3;
	CButton	m_opt2;
	CButton	m_opt1;
	CLabelControl	m_timer;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(hardware)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(hardware)
	virtual BOOL OnInitDialog();
	afx_msg void OnOption1();
	afx_msg void OnOption2();
	afx_msg void OnOption3();
	afx_msg void OnOption4();
	afx_msg void OnNext();
	afx_msg void OnResult();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnQuit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HARDWARE_H__14AD88FF_C0BE_4842_8A2B_E32994232677__INCLUDED_)
