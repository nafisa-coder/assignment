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
};

int main()
{
    Playlist p("My Playlist", "09-09-2026", true);

    cout << "Playlist Name: " << p.name << endl;
    cout << "Created On: " << p.createdOn << endl;
    cout << "Is Public: " << (p.isPublic ? "True" : "False") << endl;

    return 0;
}