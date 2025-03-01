///////////////////////////////////////////////////////////////////////////////
// File:	SetTopicDlg.cpp 
// SDK:		GameSpy Chat SDK
//
// Copyright (c) IGN Entertainment, Inc.  All rights reserved.  
// This software is made available only pursuant to certain license terms offered
// by IGN or its subsidiary GameSpy Industries, Inc.  Unlicensed use or use in a 
// manner not expressly authorized by IGN or GameSpy is prohibited.

#include "stdafx.h"
#include "chatty.h"
#include "SetTopicDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetTopicDlg dialog

CSetTopicDlg::CSetTopicDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetTopicDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSetTopicDlg)
	m_topic = _T("");
	//}}AFX_DATA_INIT
}


void CSetTopicDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetTopicDlg)
	DDX_Text(pDX, IDC_TOPIC, m_topic);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSetTopicDlg, CDialog)
	//{{AFX_MSG_MAP(CSetTopicDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetTopicDlg message handlers
