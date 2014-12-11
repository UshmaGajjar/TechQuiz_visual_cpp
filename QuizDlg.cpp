// QuizDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Quiz.h"
#include "QuizDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
#include "GKDlg.h"

#include "select_quiz.h"
#include "instructions.h"
#include "about_us.h"
/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQuizDlg dialog

CQuizDlg::CQuizDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CQuizDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CQuizDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CQuizDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CQuizDlg)
	DDX_Control(pDX, IDC_SHOCKWAVEFLASH1, m_1);
	DDX_Control(pDX, IDC_SHOCKWAVEFLASH2, m_2);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CQuizDlg, CDialog)
	//{{AFX_MSG_MAP(CQuizDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_UTILITY_CALCULATOR, OnUtilityCalculator)
	ON_COMMAND(ID_UTILITY_NOTEPAD, OnUtilityNotepad)
	ON_COMMAND(ID_QUIZ_GENERALKNOWLEDGE, OnQuizGeneralknowledge)
	ON_COMMAND(ID_QUIZ_APTITUDE, OnQuizAptitude)
	ON_COMMAND(ID_QUIZ_QUIT, OnQuizQuit)
	ON_COMMAND(ID_QUIZ_HARDWARE, OnQuizHardware)
	ON_COMMAND(ID_QUIZ_JAVALANGUAGE, OnQuizJavalanguage)
	ON_COMMAND(ID_QUIZ_CLANGUAGE, OnQuizClanguage)
	ON_COMMAND(ID_HELP_INSTRUCTIONS, OnInstructions)
	ON_COMMAND(ID_ABOUTUS_CREATER, OnAboutusCreater)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CQuizDlg message handlers

BOOL CQuizDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	m_1.SetMovie("G:\\Quiz\\swf\\lordganesha.swf");
	m_2.SetMovie("G:\\Quiz\\swf\\welcome.swf");
	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}
	
	

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CQuizDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CQuizDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CQuizDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


//DEL void CQuizDlg::OnGK() 
//DEL {
//DEL 	 gkdlg.DoModal();
//DEL }

//DEL void CQuizDlg::OnMenuGk() 
//DEL {
//DEL 
//DEL 	// TODO: Add your command handler code here
//DEL 	
//DEL }

//DEL void CQuizDlg::OnFileAa() 
//DEL {
//DEL 	gkdlg.DoModal();
//DEL 	
//DEL }

//DEL void CQuizDlg::OnQuizGk() 
//DEL {
//DEL 	gkdlg.DoModal();
//DEL 
//DEL 	// TODO: Add your command handler code here
//DEL 	
//DEL }

void CQuizDlg::OnUtilityCalculator() 
{
	ShellExecute(0,"open","C:\\Windows\\System32\\calc.exe",0,0,SW_SHOWNORMAL);	
}

void CQuizDlg::OnUtilityNotepad() 
{
	ShellExecute(0,"open","c:\\Windows\\notepad.exe",0,0,SW_SHOWNORMAL);	
}

void CQuizDlg::OnQuizGeneralknowledge() 
{
	
	mq.n=5;
	mq.DoModal();
	// TODO: Add your command handler code here	
}

//DEL void CQuizDlg::OnTimerPbar() 
//DEL {
//DEL 	progress_bar pbar;
//DEL 	pbar.DoModal();	
//DEL }

void CQuizDlg::OnQuizAptitude() 
{
	mq.n=4;
	mq.DoModal();
	
}

void CQuizDlg::OnQuizQuit() 
{
	exit(0);	
}

void CQuizDlg::OnQuizHardware() 
{
	mq.n=3;
	mq.DoModal();
}

void CQuizDlg::OnQuizJavalanguage() 
{
	mq.n=2;
	mq.DoModal();
}

void CQuizDlg::OnQuizClanguage() 
{
	mq.n=1;
	mq.DoModal();
}

void CAboutDlg::OnOK() 
{
	// TODO: Add extra validation here
	
	CDialog::OnOK();
}

BEGIN_EVENTSINK_MAP(CQuizDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CQuizDlg)
	ON_EVENT(CQuizDlg, IDC_COMMANDBUTTON1, -600 /* Click */, OnQuiz, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CQuizDlg::OnQuiz() 
{
	select_quiz sq;
	sq.DoModal();
}

void CQuizDlg::OnInstructions() 
{
	instructions ins;
	ins.DoModal();
}

void CQuizDlg::OnAboutusCreater() 
{
	about_us au;
	au.DoModal();
}
