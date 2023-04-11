/***************************************************************
 * Name:      Gra_memoryMain.h
 * Purpose:   Defines Application Frame
 * Author:    Anastasiia_Milena ()
 * Created:   2023-01-01
 * Copyright: Anastasiia_Milena ()
 * License:
 **************************************************************/

#ifndef GRA_MEMORYMAIN_H
#define GRA_MEMORYMAIN_H



//(*Headers(Gra_memoryDialog)
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/statbmp.h>
//*)

class Gra_memoryDialog: public wxDialog
{
    public:

        Gra_memoryDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~Gra_memoryDialog();

    private:

        //(*Handlers(Gra_memoryDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        void OnButton1Click(wxCommandEvent& event);
        void OnButton2Click(wxCommandEvent& event);
        //*)

        //(*Identifiers(Gra_memoryDialog)
        static const long ID_BUTTON1;
        static const long ID_STATICBITMAP1;
        //*)

        //(*Declarations(Gra_memoryDialog)
        wxButton* Button1;
        wxStaticBitmap* StaticBitmap1;
        //*)

        DECLARE_EVENT_TABLE()

};

#endif // GRA_MEMORYMAIN_H
