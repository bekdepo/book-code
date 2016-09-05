// DlgRot.cpp : implementation file
//

#include "stdafx.h"
#include "dimageprocess.h"
#include "Dlggeo.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgRot dialog


CDlggeo::CDlggeo(CWnd* pParent /*=NULL*/)
: CDialog(CDlggeo::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgRot)
	m_rotAngle = 90;
	//}}AFX_DATA_INIT
}


void CDlggeo::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgRot)
	DDX_Text(pDX, IDC_rot_geo, m_rotAngle);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlggeo, CDialog)
	//{{AFX_MSG_MAP(CDlgRot)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgRot message handlers

BOOL CDlggeo::OnInitDialog() 
{
	CDialog::OnInitDialog();

	// TODO: Add extra initialization here
	CSpinButtonCtrl* pSpinAng=(CSpinButtonCtrl*)GetDlgItem(IDC_SPIN_geo);
	pSpinAng->SetRange(-360,360);
	return TRUE;  // return TRUE unless you set the focus to a control
	// EXCEPTION: OCX Property Pages should return FALSE
}
