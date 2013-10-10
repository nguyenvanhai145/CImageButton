// CImageButton.h : main header file for the CIMAGEBUTTON application
//

#if !defined(AFX_CIMAGEBUTTON_H__CD28D596_2AAA_431F_9A21_5A09328763C0__INCLUDED_)
#define AFX_CIMAGEBUTTON_H__CD28D596_2AAA_431F_9A21_5A09328763C0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CCImageButtonApp:
// See CImageButton.cpp for the implementation of this class
//

class CCImageButtonApp : public CWinApp
{
public:
	CCImageButtonApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CCImageButtonApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CCImageButtonApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CIMAGEBUTTON_H__CD28D596_2AAA_431F_9A21_5A09328763C0__INCLUDED_)
