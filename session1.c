#include <stdio.h>
#include <string.h>

char tasks[5][100];
int taskCount = 0;

void addTask(char task[])
{
    if (taskCount < 5)
    {
        strcpy(tasks[taskCount], task);
        taskCount++;
    }
}

int main()
{
    addTask("Complete assignment");
    addTask("Study C");
    addTask("Practice programming");

    printf("Task List:\n");

    for (int i = 0; i < taskCount; i++)
    {
        printf("%d. %s\n", i + 1, tasks[i]);
    }

    return 0;
}