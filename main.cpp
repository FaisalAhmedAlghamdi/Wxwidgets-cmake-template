#include <wx/wx.h>

class MyFrame : public wxFrame
{
public:
    MyFrame(const wxString &title, const wxPoint &pos, const wxSize &size)
        : wxFrame(NULL, wxID_ANY, title, pos, size)
    {
    }
};

class MyApp : public wxApp
{
public:
    virtual bool OnInit()
    {
#ifdef _WIN32
        MSWEnableDarkMode(DarkMode_Auto); // enable darkmode on windows
#endif
        auto frame = new MyFrame("wxWidgets Listbox Example", wxPoint(50, 50), wxSize(300, 200));
        frame->Show(true);
        return true;
    }
};

wxIMPLEMENT_APP(MyApp);
