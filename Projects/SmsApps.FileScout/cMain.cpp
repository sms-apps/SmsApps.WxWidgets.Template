#include "cMain.h"
#include "wx/msgout.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_LISTBOX(wxID_ANY,OnListClicked)
wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "SMS Apps Scout", wxPoint(30, 30), wxSize(800, 600))
{
	m_list1 = new wxListBox(this, 10100, wxPoint(10, 10), wxSize(200, 200));
	m_list1->Insert("Item 1", 0);
	m_list2 = new wxListBox(this, 10200, wxPoint(250, 10), wxSize(200, 200));
}

cMain::~cMain()
{
}

void cMain::OnListClicked(wxCommandEvent& evt)
{
	wxMessageBox("Test");
	evt.Skip();
}
