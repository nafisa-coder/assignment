#include <iostream>
#include <vector>
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

class TaskList
{
public:
    vector<Task> tasks;

    void addTask(string title)
    {
        tasks.push_back(Task(title));
    }

    void markTaskDone(int index)
    {
        if (index >= 0 && index < tasks.size())
        {
            tasks[index].markDone();
        }
    }

    void showTasks()
    {
        for (int i = 0; i < tasks.size(); i++)
        {
            cout << i + 1 << ". ";
            tasks[i].display();
        }
    }
};

int main()
{
    TaskList myTasks;

    myTasks.addTask("Complete assignment");
    myTasks.addTask("Study OOP");
    myTasks.addTask("Practice C++");

    myTasks.markTaskDone(1);

    myTasks.showTasks();

    return 0;
}