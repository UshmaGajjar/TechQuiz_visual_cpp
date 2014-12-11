//{{AFX_INCLUDES()
#include "labelcontrol.h"
//}}AFX_INCLUDES
#if !defined(AFX_GKDLG_H__B3EBB05C_8CD8_4945_A217_B53CBB8DBB50__INCLUDED_)
#define AFX_GKDLG_H__B3EBB05C_8CD8_4945_A217_B53CBB8DBB50__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "afxdb.h"
#include "progress_bar.h"
#include "QuizDlg.h"

// GKDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// GKDlg dialog

class GKDlg : public CDialog
{
// Construction
public:
	void showQNo();
	void EnableNextButton();
	void DisableNextButton();
	void InsertAnswer(int ans);
	void UnCheckAll();
	void display();
	GKDlg(CWnd* pParent = NULL);   // standard constructor

	progress_bar pbar;
	CDatabase db;
	CRecordset *rs;
	int uans;
	int min,sec;

// Dialog Data
	//{{AFX_DATA(GKDlg)
	enum { IDD = IDD_DIALOG1 };
	CButton	m_qno;
	CButton	m_result;
	CButton	m_next;
	CStatic	m_que;
	CButton	m_opt4;
	CButton	m_opt3;
	CButton	m_opt2;
	CButton	m_opt1;
	CLabelControl	m_timer;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(GKDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(GKDlg)
	afx_msg void OnNext();
	afx_msg void OnOption1();
	afx_msg void OnOption2();
	afx_msg void OnOption3();
	afx_msg void OnOption4();
	afx_msg void OnTimer(UINT nIDEvent);
	virtual BOOL OnInitDialog();
	afx_msg void OnResult();
	afx_msg void OnQuit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_GKDLG_H__B3EBB05C_8CD8_4945_A217_B53CBB8DBB50__INCLUDED_)
