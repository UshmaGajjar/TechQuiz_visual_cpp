//{{AFX_INCLUDES()
#include "labelcontrol.h"
//}}AFX_INCLUDES
#if !defined(AFX_APTITUDE_H__7A8ED626_7848_4ADA_9982_4D14E16DF812__INCLUDED_)
#define AFX_APTITUDE_H__7A8ED626_7848_4ADA_9982_4D14E16DF812__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "afxdb.h"
#include "progress_bar.h"
// aptitude.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// aptitude dialog

class aptitude : public CDialog
{
// Construction
public:
	void InsertAnswer(int ans);
	void DisableNextButton();
	void showQNo();
	void UnCheckAll();
	void EnableNextButton();
	void display();
	aptitude(CWnd* pParent = NULL);   // standard constructor

	progress_bar pbar;
	CDatabase db;
	CRecordset *rs;
	int uans,min,sec;

// Dialog Data
	//{{AFX_DATA(aptitude)
	enum { IDD = IDD_DIALOG2 };
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
	//{{AFX_VIRTUAL(aptitude)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(aptitude)
	afx_msg void OnOption1();
	afx_msg void OnOption2();
	afx_msg void OnOption3();
	afx_msg void OnOption4();
	virtual BOOL OnInitDialog();
	afx_msg void OnNext();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnResult();
	afx_msg void OnQuit();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_APTITUDE_H__7A8ED626_7848_4ADA_9982_4D14E16DF812__INCLUDED_)
