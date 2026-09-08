#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Playlist
{
public:
    string name;
    string createdOn;
    bool isPublic;
    vector<string> songs;

    Playlist(string n, string date, bool publicStatus)
    {
        name = n;
        createdOn = date;
        isPublic = publicStatus;
    }

    void addSong(string songTitle)
    {
        songs.push_back(songTitle);
    }

    void displaySongs()
    {
        cout << "Songs in Playlist:" << endl;

        for (int i = 0; i < songs.size(); i++)
        {
            cout << i + 1 << ". " << songs[i] << endl;
        }
    }
};

int main()
{
    Playlist p("My Playlist", "09-09-2026", true);

    p.addSong("Perfect");
    p.addSong("Shape of You");
    p.addSong("Believer");

    p.displaySongs();

    return 0;
}