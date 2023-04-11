/***************************************************************
 * Name:      Gra_memoryApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Anastasiia_Milena ()
 * Created:   2023-01-01
 * Copyright: Anastasiia_Milena ()
 * License:
 **************************************************************/

#include "Gra_memoryApp.h"

//(*AppHeaders
#include "Gra_memoryMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(Gra_memoryApp);

bool Gra_memoryApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	Gra_memoryDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
