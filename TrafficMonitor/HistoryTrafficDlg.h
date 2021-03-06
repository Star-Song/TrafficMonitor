#pragma once
#include "afxcmn.h"
#include "Common.h"

// CHistoryTrafficDlg 对话框

class CHistoryTrafficDlg : public CDialog
{
	DECLARE_DYNAMIC(CHistoryTrafficDlg)

public:
	CHistoryTrafficDlg(deque<HistoryTraffic>& history_traffics, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CHistoryTrafficDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_HISTORY_TRAFFIC_DIALOG };
#endif

protected:
	CListCtrl m_history_list;
	deque<HistoryTraffic>& m_history_traffics;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	virtual BOOL OnInitDialog();
};
