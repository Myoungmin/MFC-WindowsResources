// CDlgDrawTest.cpp : implementation file
//

#include "pch.h"
#include "MFC-WindowsResources.h"
#include "afxdialogex.h"
#include "CDlgDrawTest.h"


// CDlgDrawTest dialog

IMPLEMENT_DYNAMIC(CDlgDrawTest, CDialogEx)

CDlgDrawTest::CDlgDrawTest(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DC_TEST_DIALOG, pParent)
{

}

CDlgDrawTest::~CDlgDrawTest()
{
}

void CDlgDrawTest::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CDlgDrawTest, CDialogEx)
	ON_WM_PAINT()
END_MESSAGE_MAP()


// CDlgDrawTest message handlers


void CDlgDrawTest::OnPaint()
{
	CPaintDC dc(this); // device context for painting
	
	CRect rect;
	GetDlgItem(IDC_PICTURE_CONTROL)->GetClientRect(&rect);
	
	// Transform the rectangle coordinates to client coordinates relative to the parent window
	//ClientToScreen(&rect);
	//GetDlgItem(IDC_PICTURE_CONTROL)->GetParent()->ScreenToClient(&rect);

	CDC* pDC = GetDlgItem(IDC_PICTURE_CONTROL)->GetWindowDC();

	CPen pen(PS_SOLID, 5, RGB(255, 0, 0)); // Create a red pen with width 1
	//CPen* pOldPen = dc.SelectObject(&pen); // Select the pen into the device context
	//dc.Rectangle(rect); // Draw the rectangle
	//dc.SelectObject(pOldPen); // Select the old pen back into the device context

	CPen* pOldPen = pDC->SelectObject(&pen);
	pDC->Rectangle(rect);
	pDC->SelectObject(pOldPen);
}
