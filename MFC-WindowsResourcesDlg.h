
// MFC-WindowsResourcesDlg.h : header file
//

#pragma once


// CMFCWindowsResourcesDlg dialog
class CMFCWindowsResourcesDlg : public CDialogEx
{
// Construction
public:
	CMFCWindowsResourcesDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCWINDOWSRESOURCES_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
};
