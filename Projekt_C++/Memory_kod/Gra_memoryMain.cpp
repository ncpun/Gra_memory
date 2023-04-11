/***************************************************************
 * Name:      Gra_memoryMain.cpp
 * Purpose:   Code for Application Frame
 * Author:    Anastasiia_Milena ()
 * Created:   2023-01-01
 * Copyright: Anastasiia_Milena ()
 * License:
 **************************************************************/

#include "Gra_memoryMain.h"
#include "NewDialogMemory.h"
#include <wx/msgdlg.h>

#undef _
#define _(s) wxString::FromUTF8(s)


//(*InternalHeaders(Gra_memoryDialog)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//helper functions
enum wxbuildinfoformat {
    short_f, long_f };

wxString wxbuildinfo(wxbuildinfoformat format)
{
    wxString wxbuild(wxVERSION_STRING);

    if (format == long_f )
    {
#if defined(__WXMSW__)
        wxbuild << _T("-Windows");
#elif defined(__UNIX__)
        wxbuild << _T("-Linux");
#endif

#if wxUSE_UNICODE
        wxbuild << _T("-Unicode build");
#else
        wxbuild << _T("-ANSI build");
#endif // wxUSE_UNICODE
    }

    return wxbuild;
}

//(*IdInit(Gra_memoryDialog)
const long Gra_memoryDialog::ID_BUTTON1 = wxNewId();
const long Gra_memoryDialog::ID_STATICBITMAP1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(Gra_memoryDialog,wxDialog)
    //(*EventTable(Gra_memoryDialog)
    //*)
END_EVENT_TABLE()

Gra_memoryDialog::Gra_memoryDialog(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(Gra_memoryDialog)
    wxBoxSizer* BoxSizer1;
    wxFlexGridSizer* FlexGridSizer1;

    Create(parent, id, _("Memory"), wxDefaultPosition, wxDefaultSize, wxDEFAULT_DIALOG_STYLE, _T("id"));
    FlexGridSizer1 = new wxFlexGridSizer(2, 1, 0, 0);
    BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
    Button1 = new wxButton(this, ID_BUTTON1, _("Rozpocznij grę"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    StaticBitmap1 = new wxStaticBitmap(this, ID_STATICBITMAP1, wxBitmap(wxImage(_T("fioletowe_kwiaty_28.bmp")).Rescale(wxSize(620,403).GetWidth(),wxSize(620,403).GetHeight())), wxDefaultPosition, wxSize(620,403), 0, _T("ID_STATICBITMAP1"));
    FlexGridSizer1->Add(StaticBitmap1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
    SetSizer(FlexGridSizer1);
    FlexGridSizer1->Fit(this);
    FlexGridSizer1->SetSizeHints(this);

    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&Gra_memoryDialog::OnButton1Click);
    //*)
    SetIcon(wxICON(bbbb));
    srand(time(0));

}

Gra_memoryDialog::~Gra_memoryDialog()
{
    //(*Destroy(Gra_memoryDialog)
    //*)
}

void Gra_memoryDialog::OnQuit(wxCommandEvent& event)
{
    Close();
}

void Gra_memoryDialog::OnAbout(wxCommandEvent& event)
{
    wxString msg = wxbuildinfo(long_f);
    wxMessageBox(msg, _("Welcome to..."));
}

void Gra_memoryDialog::OnButton1Click(wxCommandEvent& event)
{
    NewDialogMemory * dialog = new NewDialogMemory(this);
    dialog->ShowModal();
    delete dialog;
}


