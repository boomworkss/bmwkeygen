/***************************************************************
 * Name:      bmwkeygenMain.h
 * Purpose:   Defines Application Frame
 * Author:    Leo Peng (boomworks@gmail.com)
 * Created:   2015-02-14
 * Copyright: Leo Peng (http://p.hvyon.com/)
 * License:
 **************************************************************/

#ifndef BMWKEYGENMAIN_H
#define BMWKEYGENMAIN_H

//(*Headers(bmwkeygenDialog)
#include <wx/sizer.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)

class bmwkeygenDialog: public wxDialog
{
    public:

        bmwkeygenDialog(wxWindow* parent,wxWindowID id = -1);
        virtual ~bmwkeygenDialog();

    private:

        //(*Handlers(bmwkeygenDialog)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(bmwkeygenDialog)
        static const long ID_STATICTEXT2;
        static const long ID_TEXTCTRL1;
        static const long ID_BUTTON3;
        static const long ID_STATICTEXT3;
        static const long ID_TEXTCTRL2;
        static const long ID_BUTTON1;
        static const long ID_BUTTON4;
        static const long ID_BUTTON2;
        //*)

        //(*Declarations(bmwkeygenDialog)
        wxButton* Button4;
        wxStaticText* StaticText2;
        wxButton* Button1;
        wxBoxSizer* BoxSizer2;
        wxStaticText* StaticText3;
        wxButton* Button2;
        wxButton* Button3;
        wxTextCtrl* TextCtrl2;
        wxBoxSizer* BoxSizer1;
        wxTextCtrl* TextCtrl1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // BMWKEYGENMAIN_H
