/***************************************************************
 * Name:      bmwkeygenApp.cpp
 * Purpose:   Code for Application Class
 * Author:    Leo Peng (boomworks@gmail.com)
 * Created:   2015-02-14
 * Copyright: Leo Peng (http://p.hvyon.com/)
 * License:
 **************************************************************/

#include "bmwkeygenApp.h"

//(*AppHeaders
#include "bmwkeygenMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(bmwkeygenApp);

bool bmwkeygenApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	bmwkeygenDialog Dlg(0);
    	SetTopWindow(&Dlg);
    	Dlg.ShowModal();
    	wxsOK = false;
    }
    //*)
    return wxsOK;

}
