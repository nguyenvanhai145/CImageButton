// CImageButtonDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CImageButton.h"
#include "CImageButtonDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif
							    
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
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCImageButtonDlg dialog

CCImageButtonDlg::CCImageButtonDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCImageButtonDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CCImageButtonDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCImageButtonDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CCImageButtonDlg)
	DDX_Control(pDX, IDC_BUTTON4, m_Button4);
	DDX_Control(pDX, IDC_BUTTON3, m_Button3);
	DDX_Control(pDX, IDC_BUTTON2, m_Button2);
	DDX_Control(pDX, IDC_BUTTON1, m_Button1);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CCImageButtonDlg, CDialog)
	//{{AFX_MSG_MAP(CCImageButtonDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON4, &CCImageButtonDlg::OnBnClickedButton4)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CCImageButtonDlg message handlers

BOOL CCImageButtonDlg::OnInitDialog()

{
	CDialog::OnInitDialog();

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
	
	m_Button1.SetTextColor( RGB( 200 , 0 , 0 ) );
	m_Button1.SetAlignStyle( CImageButton::FOCUS_TEXTONLY | /*CImageButton::IMAGE_HCENTER |*/ CImageButton::TEXT_INCLUDE | CImageButton::IMAGE_RIGHT | CImageButton::IMAGE_VCENTER );
	m_Button1.SetButtonImage( IDB_BITMAP2 , RGB( 255 , 0 , 255 ) );
	m_Button2.SetButtonImage( IDB_BITMAP1 , RGB( 255 , 0 , 255 ) );

	m_Button3.SetAlignStyle( CImageButton::FOCUS_TEXTONLY | /*CImageButton::IMAGE_HCENTER |*/ CImageButton::TEXT_INCLUDE | CImageButton::IMAGE_RIGHT | CImageButton::IMAGE_VCENTER );
	m_Button3.SetButtonImage( IDB_BITMAP3 , RGB( 255 , 0 , 255 ) );


	m_Button4.SetAlignStyle( /*CImageButton::FOCUS_TEXTONLY |*/ /*CImageButton::IMAGE_HCENTER |*/ CImageButton::TEXT_INCLUDE | CImageButton::IMAGE_HCENTER );
	// m_Button4.SetButtonImage( IDB_BITMAP4 , RGB( 255 , 0 , 255 ) );
	m_Button4.SetButtonImage(IDB_BITMAP5, RGB( 255 , 0 , 255 ));
	return TRUE;  // return TRUE  unless you set the focus to a control
}


void CCImageButtonDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CCImageButtonDlg::OnPaint() 
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
HCURSOR CCImageButtonDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CCImageButtonDlg::OnOK() 
{
	// TODO: Add extra validation here
	m_Button1.SetTextColor( RGB( 0 , 200 , 0 ) );

	// Buttons ( Enable and Disable )
	if( m_Button1.IsWindowEnabled() ) {
	   m_Button1.EnableWindow( FALSE );
	   m_Button2.EnableWindow( FALSE );
	   m_Button3.EnableWindow( FALSE );
	   m_Button4.EnableWindow( FALSE );

	}
    else {
	   m_Button1.EnableWindow( TRUE );
	   m_Button2.EnableWindow( TRUE );
	   m_Button3.EnableWindow( TRUE );
	   m_Button4.EnableWindow( TRUE );

	}

}


void CCImageButtonDlg::OnBnClickedButton4()
{
	// TODO: Add your control notification handler code here
	int nTest = 0;
}
