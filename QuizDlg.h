// QuizDlg.h : header file
//
//{{AFX_INCLUDES()
#include "imagelist.h"
#include "shockwaveflash.h"
//}}AFX_INCLUDES

#if !defined(AFX_QUIZDLG_H__B00EBC34_CBE7_482E_8D24_5A85105FB7C5__INCLUDED_)
#define AFX_QUIZDLG_H__B00EBC34_CBE7_482E_8D24_5A85105FB7C5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "afxdb.h"
#include "progress_bar.h"
#include "GKDlg.h"
#include "aptitude.h"
#include "hardware.h"
#include "langjava.h"
#include "langc.h"z.h"
#include "menu_quiz.h"
/////////////////////////////////////////////////////////////////////////////
// CQuizDlg dialog

class CQuizDlg : public CDialog
{
// Construction
public:
	CQuizDlg(CWnd* pParent = NULL);	// standard constructor
	menu_quiz mq;
// Dialog Data
	//{{AFX_DATA(CQuizDlg)
	enum { IDD = IDD_QUIZ_DIALOG };
	CShockwaveFlash	m_1;
	CShockwaveFlash	m_2;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CQuizDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CQuizDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnUtilityCalculator();
	afx_msg void OnUtilityNotepad();
	afx_msg void OnQuizGeneralknowledge();
	afx_msg void OnQuizAptitude();
	afx_msg void OnQuizQuit();
	afx_msg void OnQuizHardware();
	afx_msg void OnQuizJavalanguage();
	afx_msg void OnQuizClanguage();
	afx_msg void OnQuiz();
	afx_msg void OnInstructions();
	afx_msg void OnAboutusCreater();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_QUIZDLG_H__B00EBC34_CBE7_482E_8D24_5A85105FB7C5__INCLUDED_)
