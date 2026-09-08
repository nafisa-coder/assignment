#include <stdio.h>
#include <string.h>

char tasks[5][100];
int isDone[5] = {0};
int taskCount = 0;

void addTask(char task[])
{
    if (taskCount < 5)
    {
        strcpy(tasks[taskCount], task);
        taskCount++;
    }
}

void markTaskDone(int index)
{
    if (index >= 0 && index < taskCount)
    {
        isDone[index] = 1;
    }
}

int main()
{
    addTask("Complete assignment");
    addTask("Study C");
    addTask("Practice programming");

    markTaskDone(1);

    printf("Updated Task List:\n");

    for (int i = 0; i < taskCount; i++)
    {
        if (isDone[i] == 1)
        {
            printf("%d. %s - DONE\n", i + 1, tasks[i]);
        }
        else
        {
            printf("%d. %s - NOT DONE\n", i + 1, tasks[i]);
        }
    }

    return 0;
}