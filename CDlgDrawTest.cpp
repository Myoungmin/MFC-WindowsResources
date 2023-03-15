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
END_MESSAGE_MAP()


// CDlgDrawTest message handlers
