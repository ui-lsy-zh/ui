///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Jun 17 2015)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "noname.h"

///////////////////////////////////////////////////////////////////////////

MyFrame1::MyFrame1( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );
	
	wxBoxSizer* bSizer2;
	bSizer2 = new wxBoxSizer( wxVERTICAL );
	
	m_scrolledWindow2 = new wxScrolledWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxHSCROLL|wxVSCROLL );
	m_scrolledWindow2->SetScrollRate( 5, 5 );
	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );
	
	wxBoxSizer* bSizer5;
	bSizer5 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );
	
	m_textCtrl7 = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textCtrl7, 0, wxALL|wxEXPAND, 5 );
	
	m_textCtrl8 = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxTE_PASSWORD );
	bSizer6->Add( m_textCtrl8, 0, wxALL|wxEXPAND, 5 );
	
	m_textCtrl9 = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxT("qwe"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textCtrl9, 0, wxALL|wxEXPAND, 5 );
	
	m_textCtrl10 = new wxTextCtrl( m_scrolledWindow2, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	bSizer6->Add( m_textCtrl10, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer5->Add( bSizer6, 2, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer7;
	bSizer7 = new wxBoxSizer( wxVERTICAL );
	
	m_staticText1 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	bSizer7->Add( m_staticText1, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText2 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	bSizer7->Add( m_staticText2, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText3 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	bSizer7->Add( m_staticText3, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText4 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	bSizer7->Add( m_staticText4, 0, wxALL|wxEXPAND, 5 );
	
	m_staticText5 = new wxStaticText( m_scrolledWindow2, wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	bSizer7->Add( m_staticText5, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer5->Add( bSizer7, 1, wxEXPAND, 5 );
	
	m_staticline1 = new wxStaticLine( m_scrolledWindow2, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxLI_VERTICAL );
	bSizer5->Add( m_staticline1, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer8;
	bSizer8 = new wxBoxSizer( wxVERTICAL );
	
	m_bpButton1 = new wxBitmapButton( m_scrolledWindow2, wxID_ANY, wxBitmap( wxT("flag.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer8->Add( m_bpButton1, 0, wxALL|wxEXPAND, 5 );
	
	m_bpButton2 = new wxBitmapButton( m_scrolledWindow2, wxID_ANY, wxBitmap( wxT("explode1.bmp"), wxBITMAP_TYPE_ANY ), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW );
	bSizer8->Add( m_bpButton2, 0, wxALL|wxEXPAND, 5 );
	
	
	bSizer5->Add( bSizer8, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer5, 1, wxEXPAND, 5 );
	
	m_gauge4 = new wxGauge( m_scrolledWindow2, wxID_ANY, 100, wxDefaultPosition, wxDefaultSize, wxGA_HORIZONTAL );
	m_gauge4->SetValue( 35 ); 
	bSizer3->Add( m_gauge4, 0, wxALL|wxEXPAND, 5 );
	
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );
	
	wxBoxSizer* bSizer10;
	bSizer10 = new wxBoxSizer( wxVERTICAL );
	
	m_checkBox3 = new wxCheckBox( m_scrolledWindow2, wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox3, 0, wxALL, 5 );
	
	m_checkBox4 = new wxCheckBox( m_scrolledWindow2, wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox4, 0, wxALL, 5 );
	
	m_checkBox5 = new wxCheckBox( m_scrolledWindow2, wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox5, 0, wxALL, 5 );
	
	m_checkBox6 = new wxCheckBox( m_scrolledWindow2, wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox6, 0, wxALL, 5 );
	
	m_checkBox7 = new wxCheckBox( m_scrolledWindow2, wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox7, 0, wxALL, 5 );
	
	m_checkBox8 = new wxCheckBox( m_scrolledWindow2, wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer10->Add( m_checkBox8, 0, wxALL, 5 );
	
	
	bSizer9->Add( bSizer10, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer11;
	bSizer11 = new wxBoxSizer( wxVERTICAL );
	
	m_radioBtn3 = new wxRadioButton( m_scrolledWindow2, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn3, 0, wxALL, 5 );
	
	m_radioBtn4 = new wxRadioButton( m_scrolledWindow2, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn4, 0, wxALL, 5 );
	
	m_radioBtn5 = new wxRadioButton( m_scrolledWindow2, wxID_ANY, wxT("RadioBtn"), wxDefaultPosition, wxDefaultSize, 0 );
	bSizer11->Add( m_radioBtn5, 0, wxALL, 5 );
	
	
	bSizer9->Add( bSizer11, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer12;
	bSizer12 = new wxBoxSizer( wxVERTICAL );
	
	m_listBox2 = new wxListBox( m_scrolledWindow2, wxID_ANY, wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer12->Add( m_listBox2, 0, wxALL, 5 );
	
	
	bSizer9->Add( bSizer12, 1, wxEXPAND, 5 );
	
	wxBoxSizer* bSizer13;
	bSizer13 = new wxBoxSizer( wxVERTICAL );
	
	m_comboBox2 = new wxComboBox( m_scrolledWindow2, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 ); 
	bSizer13->Add( m_comboBox2, 0, wxALL, 5 );
	
	
	bSizer9->Add( bSizer13, 1, wxEXPAND, 5 );
	
	
	bSizer3->Add( bSizer9, 1, wxEXPAND, 5 );
	
	
	m_scrolledWindow2->SetSizer( bSizer3 );
	m_scrolledWindow2->Layout();
	bSizer3->Fit( m_scrolledWindow2 );
	bSizer2->Add( m_scrolledWindow2, 1, wxEXPAND | wxALL, 5 );
	
	
	this->SetSizer( bSizer2 );
	this->Layout();
	m_statusBar1 = this->CreateStatusBar( 1, wxST_SIZEGRIP, wxID_ANY );
	
	this->Centre( wxBOTH );
}

MyFrame1::~MyFrame1()
{
}
