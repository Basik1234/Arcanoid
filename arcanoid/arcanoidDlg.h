
// arcanoidDlg.h : header file
//

#pragma once


// CarcanoidDlg dialog
class CarcanoidDlg : public CDialogEx
{
// Construction
public:
	CarcanoidDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_ARCANOID_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	void CarcanoidDlg::Player(CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	void CarcanoidDlg::ball();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	double CarcanoidDlg::ygl(double a, double b);
	CPoint crd; // ���������� ��������� (�.�. ���)
	double HELP;
};
