#pragma once
#include "wx/wx.h"


class cMain : public wxFrame
{
public:
	cMain();
	~cMain();

public:
	// Form controls
	wxListBox* m_list1 = nullptr;
	wxListBox* m_list2 = nullptr;

	void OnListClicked(wxCommandEvent& evt);

	wxDECLARE_EVENT_TABLE();
};