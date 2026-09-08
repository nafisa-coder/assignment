#include <iostream>
#include <string>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;

    Playlist(string n, string date, bool publicStatus)
    {
        name = n;
        createdOn = date;
        isPublic = publicStatus;
    }

    void togglePublic()
    {
        isPublic = !isPublic;
    }
};

int main()
{
    Playlist p("My Playlist", "09-09-2026", true);

    cout << "Initial Public Status: "
         << (p.isPublic ? "True" : "False") << endl;

    p.togglePublic();
    cout << "After First Toggle: "
         << (p.isPublic ? "True" : "False") << endl;

    p.togglePublic();
    cout << "After Second Toggle: "
         << (p.isPublic ? "True" : "False") << endl;

    return 0;
}