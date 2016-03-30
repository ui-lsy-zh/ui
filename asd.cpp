#include <wx/wx.h>
#include "noname.h"
class MyApp: public wxApp
{
public:
    virtual bool OnInit();
};
wxIMPLEMENT_APP(MyApp);
bool MyApp::OnInit()
{
    MyFrame1 *frame = new MyFrame1( 0 );
    frame->Show( true );
    return true;
}
