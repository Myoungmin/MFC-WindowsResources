#pragma once
#include "afxdialogex.h"


// CDlgDrawTest dialog

class CDlgDrawTest : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgDrawTest)

public:
	CDlgDrawTest(CWnd* pParent = nullptr);   // standard constructor
	virtual ~CDlgDrawTest();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DC_TEST_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

private:
	void DrawRedRectangle();
	void DrawBitmap();
};
