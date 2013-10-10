// CImageButtonDlg.h : header file
//

#if !defined(AFX_CIMAGEBUTTONDLG_H__960E8B35_BDC8_4C56_88AC_DBD6620EA1C7__INCLUDED_)
#define AFX_CIMAGEBUTTONDLG_H__960E8B35_BDC8_4C56_88AC_DBD6620EA1C7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CCImageButtonDlg dialog

class CCImageButtonDlg : public CDialog
{
// Construction
public:
	CCImageButtonDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CCImageButtonDlg)
	enum { IDD = IDD_CIMAGEBUTTON_DIALOG };
	CImageButton	m_Button4;
	CImageButton	m_Button3;
	CImageButton	m_Button2;
	CImageButton	m_Button1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCImageButtonDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CCImageButtonDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton4();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIMAGEBUTTONDLG_H__960E8B35_BDC8_4C56_88AC_DBD6620EA1C7__INCLUDED_)
