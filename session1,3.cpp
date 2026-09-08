#include <iostream>
using namespace std;

class Task
{
public:
    string title;
    bool isDone;

    Task(string t)
    {
        title = t;
        isDone = false;
    }

    void markDone()
    {
        isDone = true;
    }

    void display()
    {
        if (isDone)
        {
            cout << title << " - DONE" << endl;
        }
        else
        {
            cout << title << " - NOT DONE" << endl;
        }
    }
};