//{{AFX_INCLUDES()
#include "labelcontrol.h"
//}}AFX_INCLUDES
#if !defined(AFX_LANGJAVA_H__D872E59D_4B6B_4056_BA4F_1B1C7005F066__INCLUDED_)
#define AFX_LANGJAVA_H__D872E59D_4B6B_4056_BA4F_1B1C7005F066__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
#include "afxdb.h"
#include "progress_bar.h"

// langjava.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// langjava dialog

class langjava : public CDialog
{
// Construction
public:
	void UnCheckAll();
	void EnableNextButton();
	void DisableNextButton();
	void display();
	void InsertAnswer(int ans);
	void showQNo();
	langjava(CWnd* pParent = NULL);   // standard constructor
	
	progress_bar pbar;
	CDatabase db;
CRecordset *rs;
int uans;
int min,sec;
// Dialog Data
	//{{AFX_DATA(langjava)
	enum { IDD = IDD_DIALOG4 };
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
	//{{AFX_VIRTUAL(langjava)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(langjava)
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

#endif // !defined(AFX_LANGJAVA_H__D872E59D_4B6B_4056_BA4F_1B1C7005F066__INCLUDED_)
