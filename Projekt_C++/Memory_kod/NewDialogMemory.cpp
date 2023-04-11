#include "NewDialogMemory.h"
#include <wx/msgdlg.h>
#include <iostream>
#include<random>

#undef _
#define _(s) wxString::FromUTF8(s)



//(*InternalHeaders(NewDialogMemory)
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/intl.h>
#include <wx/string.h>
//*)

//(*IdInit(NewDialogMemory)
const long NewDialogMemory::ID_BITMAPBUTTON1 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON2 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON3 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON4 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON5 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON6 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON7 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON8 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON9 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON10 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON11 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON12 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON13 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON14 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON15 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON16 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON17 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON18 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON19 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON20 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON21 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON22 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON23 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON24 = wxNewId();
const long NewDialogMemory::ID_BITMAPBUTTON25 = wxNewId();
const long NewDialogMemory::ID_BUTTON1 = wxNewId();
const long NewDialogMemory::ID_BUTTON2 = wxNewId();
const long NewDialogMemory::ID_STATICTEXT1 = wxNewId();
const long NewDialogMemory::ID_TIMER1 = wxNewId();
const long NewDialogMemory::ID_TIMER2 = wxNewId();
//*)

BEGIN_EVENT_TABLE(NewDialogMemory,wxDialog)
	//(*EventTable(NewDialogMemory)
	//*)
END_EVENT_TABLE()

NewDialogMemory::NewDialogMemory(wxWindow* parent,wxWindowID id,const wxPoint& pos,const wxSize& size)
{
	//(*Initialize(NewDialogMemory)
	wxBoxSizer* BoxSizer1;
	wxFlexGridSizer* FlexGridSizer1;
	wxFlexGridSizer* FlexGridSizer2;

	Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSTAY_ON_TOP|wxDEFAULT_DIALOG_STYLE|wxSYSTEM_MENU|wxBORDER_RAISED, _T("id"));
	SetClientSize(wxDefaultSize);
	Move(wxPoint(-1,-1));
	SetFocus();
	FlexGridSizer1 = new wxFlexGridSizer(3, 1, 0, 0);
	FlexGridSizer2 = new wxFlexGridSizer(5, 5, 0, 0);
	BitmapButton1 = new wxBitmapButton(this, ID_BITMAPBUTTON1, wxBitmap(wxImage(_T("kremowe_tlo.bmp"))), wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON1"));
	FlexGridSizer2->Add(BitmapButton1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton2 = new wxBitmapButton(this, ID_BITMAPBUTTON2, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON2"));
	FlexGridSizer2->Add(BitmapButton2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton3 = new wxBitmapButton(this, ID_BITMAPBUTTON3, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON3"));
	FlexGridSizer2->Add(BitmapButton3, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton4 = new wxBitmapButton(this, ID_BITMAPBUTTON4, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON4"));
	FlexGridSizer2->Add(BitmapButton4, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton5 = new wxBitmapButton(this, ID_BITMAPBUTTON5, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON5"));
	FlexGridSizer2->Add(BitmapButton5, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton6 = new wxBitmapButton(this, ID_BITMAPBUTTON6, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON6"));
	FlexGridSizer2->Add(BitmapButton6, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton7 = new wxBitmapButton(this, ID_BITMAPBUTTON7, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON7"));
	FlexGridSizer2->Add(BitmapButton7, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton8 = new wxBitmapButton(this, ID_BITMAPBUTTON8, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON8"));
	FlexGridSizer2->Add(BitmapButton8, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton9 = new wxBitmapButton(this, ID_BITMAPBUTTON9, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON9"));
	FlexGridSizer2->Add(BitmapButton9, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton10 = new wxBitmapButton(this, ID_BITMAPBUTTON10, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON10"));
	FlexGridSizer2->Add(BitmapButton10, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton11 = new wxBitmapButton(this, ID_BITMAPBUTTON11, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON11"));
	FlexGridSizer2->Add(BitmapButton11, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton12 = new wxBitmapButton(this, ID_BITMAPBUTTON12, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON12"));
	FlexGridSizer2->Add(BitmapButton12, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton13 = new wxBitmapButton(this, ID_BITMAPBUTTON13, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON13"));
	FlexGridSizer2->Add(BitmapButton13, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton14 = new wxBitmapButton(this, ID_BITMAPBUTTON14, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON14"));
	FlexGridSizer2->Add(BitmapButton14, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton15 = new wxBitmapButton(this, ID_BITMAPBUTTON15, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON15"));
	FlexGridSizer2->Add(BitmapButton15, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton16 = new wxBitmapButton(this, ID_BITMAPBUTTON16, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON16"));
	FlexGridSizer2->Add(BitmapButton16, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton17 = new wxBitmapButton(this, ID_BITMAPBUTTON17, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON17"));
	FlexGridSizer2->Add(BitmapButton17, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton18 = new wxBitmapButton(this, ID_BITMAPBUTTON18, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON18"));
	FlexGridSizer2->Add(BitmapButton18, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton19 = new wxBitmapButton(this, ID_BITMAPBUTTON19, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON19"));
	FlexGridSizer2->Add(BitmapButton19, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton20 = new wxBitmapButton(this, ID_BITMAPBUTTON20, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON20"));
	FlexGridSizer2->Add(BitmapButton20, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton21 = new wxBitmapButton(this, ID_BITMAPBUTTON21, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON21"));
	FlexGridSizer2->Add(BitmapButton21, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton22 = new wxBitmapButton(this, ID_BITMAPBUTTON22, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON22"));
	FlexGridSizer2->Add(BitmapButton22, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton23 = new wxBitmapButton(this, ID_BITMAPBUTTON23, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON23"));
	FlexGridSizer2->Add(BitmapButton23, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton24 = new wxBitmapButton(this, ID_BITMAPBUTTON24, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON24"));
	FlexGridSizer2->Add(BitmapButton24, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BitmapButton25 = new wxBitmapButton(this, ID_BITMAPBUTTON25, wxNullBitmap, wxDefaultPosition, wxDefaultSize, wxBU_AUTODRAW, wxDefaultValidator, _T("ID_BITMAPBUTTON25"));
	FlexGridSizer2->Add(BitmapButton25, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(FlexGridSizer2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	BoxSizer1 = new wxBoxSizer(wxHORIZONTAL);
	Button1 = new wxButton(this, ID_BUTTON1, _("Nowa gra"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
	BoxSizer1->Add(Button1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	Button2 = new wxButton(this, ID_BUTTON2, _("Podpowiedź"), wxDefaultPosition, wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
	BoxSizer1->Add(Button2, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	StaticText1 = new wxStaticText(this, ID_STATICTEXT1, _("Label"), wxDefaultPosition, wxDefaultSize, 0, _T("ID_STATICTEXT1"));
	BoxSizer1->Add(StaticText1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	FlexGridSizer1->Add(BoxSizer1, 1, wxALL|wxALIGN_CENTER_HORIZONTAL|wxALIGN_CENTER_VERTICAL, 5);
	SetSizer(FlexGridSizer1);
	Timer1.SetOwner(this, ID_TIMER1);
	Timer1.Start(1000, false);
	Timer2.SetOwner(this, ID_TIMER2);
	Timer2.Start(10, false);
	FlexGridSizer1->Fit(this);
	FlexGridSizer1->SetSizeHints(this);

	Connect(ID_BITMAPBUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialogMemory::OnBitmapButton1Click);
	Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialogMemory::OnButton1Click1);
	Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&NewDialogMemory::OnButton2Click1);
	Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&NewDialogMemory::OnTimer1Trigger);
	Connect(ID_TIMER2,wxEVT_TIMER,(wxObjectEventFunction)&NewDialogMemory::OnTimer2Trigger);
	//*)

    #define a(nr) plansza[nr-1] = BitmapButton ## nr;
    a(1) a(2) a(3) a(4) a(5) a(6) a(7) a(8) a(9) a(10) a(11) a(12) a(13) a(14)
    a(15) a(16) a(17) a(18) a(19) a(20) a(21) a(22) a(23) a(24) a(25)
    #undef a

    rysunki[0]=wxBitmap(wxImage(_T("kremowe_tlo.bmp")));
    rysunki[1]=wxBitmap(wxImage(_T("Kwiatki1.bmp")));
    rysunki[2]=wxBitmap(wxImage(_T("Kwiatki2.bmp")));
    rysunki[3]=wxBitmap(wxImage(_T("Kwiatki3.bmp")));
    rysunki[4]=wxBitmap(wxImage(_T("Kwiatki4.bmp")));
    rysunki[5]=wxBitmap(wxImage(_T("Kwiatki5.bmp")));
    rysunki[6]=wxBitmap(wxImage(_T("Kwiatki6.bmp")));
    rysunki[7]=wxBitmap(wxImage(_T("Kwiatki7.bmp")));
    rysunki[8]=wxBitmap(wxImage(_T("Kwiatki8.bmp")));
    rysunki[9]=wxBitmap(wxImage(_T("Kwiatki9.bmp")));
    rysunki[10]=wxBitmap(wxImage(_T("Kwiatki10.bmp")));
    rysunki[11]=wxBitmap(wxImage(_T("Kwiatki11.bmp")));
    rysunki[12]=wxBitmap(wxImage(_T("Kwiatki12.bmp")));
    rysunki[13]=wxBitmap(wxImage(_T("Oko.bmp")));

    SetIcon(wxICON(aaaa));

    for (int i =0; i<25; i++)
    {
        plansza[i] -> SetBitmap(wxBitmap(wxImage(_T("kremowe_tlo.bmp"))));
        Connect( plansza[i]->GetId(), wxEVT_COMMAND_BUTTON_CLICKED,
                (wxObjectEventFunction)&NewDialogMemory::OnBitmapButton1Click);
        przelicz[plansza[i]->GetId()] = i;
        plansza[i]->SetBitmap(rysunki[0]);
    }
    this->Fit();
    Timer2.Start();
    funkcja_ustawiajaca_obrazki();
}

NewDialogMemory::~NewDialogMemory()
{
	//(*Destroy(NewDialogMemory)
	//*)
}

void NewDialogMemory::funkcja_ustawiajaca_obrazki(){

    default_random_engine generator(time(0));
    uniform_int_distribution<> losowanie(0, 24);

        for(int i=1;i<=12;i++)
    {
        int liczba_wylosowana1=losowanie(generator);
        int liczba_wylosowana2=losowanie(generator);

        while(tablica[liczba_wylosowana1]!=0)
        {
            liczba_wylosowana1=losowanie(generator);
        }

        tablica[liczba_wylosowana1]=1;
        miejsce_na_rysunek[liczba_wylosowana1]=rysunki[i];
        tablica_numerow_rysunkow[liczba_wylosowana1] = i;

        while(tablica[liczba_wylosowana2]!=0)
        {
            liczba_wylosowana2=losowanie(generator);
        }
        tablica[liczba_wylosowana2]=1;
        miejsce_na_rysunek[liczba_wylosowana2]=rysunki[i];
        tablica_numerow_rysunkow[liczba_wylosowana2] = i;
    }
    for(int i=0;i<=24;i++)
    {
        if(tablica[i]==0)
        {
            miejsce_na_rysunek[i]=rysunki[13];
            tablica_numerow_rysunkow[i] = 13;
        }
    }
}

void NewDialogMemory::OnBitmapButton1Click(wxCommandEvent& event)
{
    int id = event.GetId();
    int numer = przelicz[id];
    plansza[numer] -> SetBitmap(rysunki[tablica_numerow_rysunkow[numer]]);
    funkcja_spr_czy_rysunki_sa_takie_same(numer);
}

void NewDialogMemory::OnButton1Click1(wxCommandEvent& event)
{
    Close ();
    NewDialogMemory * dialog = new NewDialogMemory(NULL);
    dialog->ShowModal();
    delete dialog;

}

void NewDialogMemory::OnButton2Click1(wxCommandEvent& event)
{
    if(oko==0)
        wxMessageBox(_("Nie masz podpowiedzi"), "Brak podpowiedzi");
    else
    {
        for(int i = 0; i <= 24; i++)
        {
            plansza[i] -> SetBitmap(rysunki[tablica_numerow_rysunkow[i]]);
        }
        Timer1.Start();
        timer = 0;
        oko=0;
    }
}

void NewDialogMemory::funkcja_spr_czy_rysunki_sa_takie_same(int numer)
{
    plansza[numer]->SetBitmapDisabled(miejsce_na_rysunek[numer]);
    plansza[numer]->Enable(false);
    wektor.push_back(numer);
    if(tablica_numerow_rysunkow[wektor[wektor.size()-1]]==13 && wektor.size()%2 != 0)
    {
        Sleep(500);
        wxMessageBox(_("Masz podpowiedź"), _("Podpowiedź"));
        wygrana=wygrana+1;
        wektor.push_back(0);
        oko=1;
    }
    else if((wektor.size()%2 == 0) && tablica_numerow_rysunkow[wektor[wektor.size()-1]]==13)
    {
        Sleep(500);
        plansza[wektor[wektor.size()-2]]->Enable(true);
        plansza[wektor[wektor.size()-2]]->SetBitmap(rysunki[0]);
        wxMessageBox(_("Masz podpowiedź"), _("Podpowiedź"));
        wygrana=wygrana+1;
        oko=1;
    }
    else if((wektor.size()%2 == 0) && (tablica_numerow_rysunkow[wektor[wektor.size()-2]]
                                       != tablica_numerow_rysunkow[wektor[wektor.size()-1]]))
    {
        Sleep(500);
        plansza[wektor[wektor.size()-2]]->Enable(true);
        plansza[wektor[wektor.size()-1]]->Enable(true);
        plansza[wektor[wektor.size()-2]]->SetBitmap(rysunki[0]);
        plansza[wektor[wektor.size()-1]]->SetBitmap(rysunki[0]);
    }
    else if((wektor.size()%2 == 0) && (tablica_numerow_rysunkow[wektor[wektor.size()-2]]
                                       == tablica_numerow_rysunkow[wektor[wektor.size()-1]]))
    {
        Sleep(500);
        wygrana=wygrana+1;
    }
    if(wygrana==13)
    {
        Timer2.Stop();
        wxMessageBox(_("Wygrałeś") + (_(". Twój czas: "))+ StaticText1->GetLabel()
                     +" sekund","Koniec gry",wxICON_DEFAULT_TYPE);
        Close ();
        NewDialogMemory * dialog = new NewDialogMemory(this);
        dialog->ShowModal();
        delete dialog;
    }
}



void NewDialogMemory::OnTimer1Trigger(wxTimerEvent& event)
{
    timer++;
    if(timer == 1)
    {
        for(int i = 0; i <= 24; i++)
            plansza[i] -> SetBitmap(wxBitmap(wxImage(_T("kremowe_tlo.bmp"))));
        Timer1.Stop();
    }
}

void NewDialogMemory::OnTimer2Trigger(wxTimerEvent& event)
{
    ile_razy_timer=ile_razy_timer+1;
    double s = ile_razy_timer * Timer2.GetInterval()/640.0;
    StaticText1->SetLabel(wxString::Format("%.2f",s));
}
