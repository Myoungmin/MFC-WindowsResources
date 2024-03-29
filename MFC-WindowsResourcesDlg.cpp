﻿
// MFC-WindowsResourcesDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "MFC-WindowsResources.h"
#include "MFC-WindowsResourcesDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CMFCWindowsResourcesDlg dialog



CMFCWindowsResourcesDlg::CMFCWindowsResourcesDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_MFCWINDOWSRESOURCES_DIALOG, pParent)
{
	// 생성한 Icon ID로 설정하여, 아이콘을 변경하여 실행
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MYICON);
}

void CMFCWindowsResourcesDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CMFCWindowsResourcesDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_COMMAND(ID_FILE_NEW32771, &CMFCWindowsResourcesDlg::OnFileNew)
END_MESSAGE_MAP()


// CMFCWindowsResourcesDlg message handlers

BOOL CMFCWindowsResourcesDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// 툴바 생성
	if (!m_wndToolBar.Create(this) || !m_wndToolBar.LoadToolBar(IDR_TOOLBAR1))
	{
		TRACE0("Failed to Create Dialog Toolbar\n");
		EndDialog(IDCANCEL);
	}

	// Now we REALLY Redraw the Toolbar
	RepositionBars(AFX_IDW_CONTROLBAR_FIRST, AFX_IDW_CONTROLBAR_LAST, 0);


	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMFCWindowsResourcesDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

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
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMFCWindowsResourcesDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CMFCWindowsResourcesDlg::OnFileNew()
{
	// TODO: Add your command handler code here
	MessageBox(L"File > New menu option");
}
