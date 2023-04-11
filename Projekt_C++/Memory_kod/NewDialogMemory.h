#ifndef NEWDIALOGMEMORY_H
#define NEWDIALOGMEMORY_H
#include <map>
#include <iostream>
#include <vector>

using namespace std;

//(*Headers(NewDialogMemory)
#include <wx/bmpbuttn.h>
#include <wx/button.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/timer.h>
//*)

class NewDialogMemory: public wxDialog
{
	public:

		NewDialogMemory(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~NewDialogMemory();

		//(*Declarations(NewDialogMemory)
		wxBitmapButton* BitmapButton10;
		wxBitmapButton* BitmapButton11;
		wxBitmapButton* BitmapButton12;
		wxBitmapButton* BitmapButton13;
		wxBitmapButton* BitmapButton14;
		wxBitmapButton* BitmapButton15;
		wxBitmapButton* BitmapButton16;
		wxBitmapButton* BitmapButton17;
		wxBitmapButton* BitmapButton18;
		wxBitmapButton* BitmapButton19;
		wxBitmapButton* BitmapButton1;
		wxBitmapButton* BitmapButton20;
		wxBitmapButton* BitmapButton21;
		wxBitmapButton* BitmapButton22;
		wxBitmapButton* BitmapButton23;
		wxBitmapButton* BitmapButton24;
		wxBitmapButton* BitmapButton25;
		wxBitmapButton* BitmapButton2;
		wxBitmapButton* BitmapButton3;
		wxBitmapButton* BitmapButton4;
		wxBitmapButton* BitmapButton5;
		wxBitmapButton* BitmapButton6;
		wxBitmapButton* BitmapButton7;
		wxBitmapButton* BitmapButton8;
		wxBitmapButton* BitmapButton9;
		wxButton* Button1;
		wxButton* Button2;
		wxStaticText* StaticText1;
		wxTimer Timer1;
		wxTimer Timer2;
		//*)

	protected:

		//(*Identifiers(NewDialogMemory)
		static const long ID_BITMAPBUTTON1;
		static const long ID_BITMAPBUTTON2;
		static const long ID_BITMAPBUTTON3;
		static const long ID_BITMAPBUTTON4;
		static const long ID_BITMAPBUTTON5;
		static const long ID_BITMAPBUTTON6;
		static const long ID_BITMAPBUTTON7;
		static const long ID_BITMAPBUTTON8;
		static const long ID_BITMAPBUTTON9;
		static const long ID_BITMAPBUTTON10;
		static const long ID_BITMAPBUTTON11;
		static const long ID_BITMAPBUTTON12;
		static const long ID_BITMAPBUTTON13;
		static const long ID_BITMAPBUTTON14;
		static const long ID_BITMAPBUTTON15;
		static const long ID_BITMAPBUTTON16;
		static const long ID_BITMAPBUTTON17;
		static const long ID_BITMAPBUTTON18;
		static const long ID_BITMAPBUTTON19;
		static const long ID_BITMAPBUTTON20;
		static const long ID_BITMAPBUTTON21;
		static const long ID_BITMAPBUTTON22;
		static const long ID_BITMAPBUTTON23;
		static const long ID_BITMAPBUTTON24;
		static const long ID_BITMAPBUTTON25;
		static const long ID_BUTTON1;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT1;
		static const long ID_TIMER1;
		static const long ID_TIMER2;
		//*)

	private:

		//(*Handlers(NewDialogMemory)
		void OnButton1Click(wxCommandEvent& event);
		void OnButton2Click(wxCommandEvent& event);
		void OnBitmapButton1Click(wxCommandEvent& event);
		void OnButton1Click1(wxCommandEvent& event);
		void OnButton2Click1(wxCommandEvent& event);
		void OnTimer1Trigger(wxTimerEvent& event);
		void OnTimer2Trigger(wxTimerEvent& event);
		//*)

		DECLARE_EVENT_TABLE()
		wxBitmapButton * plansza[25];
        map <int,int> przelicz;
        wxBitmap rysunki[14];
        int tablica_numerow_rysunkow[25];
        wxBitmap miejsce_na_rysunek[25];
        int tablica[25] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        void funkcja_ustawiajaca_obrazki();
        void funkcja_spr_czy_rysunki_sa_takie_same(int numer);
        vector<int> wektor;
        int wygrana=0;
        int oko = 0;
        int timer = 0;
        int ile_razy_timer = 10;
};

#endif
