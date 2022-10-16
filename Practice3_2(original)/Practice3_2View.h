
// Practice3_2View.h: CPractice32View 클래스의 인터페이스
//

#pragma once


class CPractice32View : public CView
{
protected: // serialization에서만 만들어집니다.
	CPractice32View() noexcept;
	DECLARE_DYNCREATE(CPractice32View)

// 특성입니다.
public:
	CPractice32Doc* GetDocument() const;

// 작업입니다.
public:

// 재정의입니다.
public:
	virtual void OnDraw(CDC* pDC);  // 이 뷰를 그리기 위해 재정의되었습니다.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// 구현입니다.
public:
	virtual ~CPractice32View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 생성된 메시지 맵 함수
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
public:
	bool m_bTimerRun = true;
	bool m_bTimerType = false;
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	CString m_strTimer;
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnDestroy();
};

#ifndef _DEBUG  // Practice3_2View.cpp의 디버그 버전
inline CPractice32Doc* CPractice32View::GetDocument() const
   { return reinterpret_cast<CPractice32Doc*>(m_pDocument); }
#endif

