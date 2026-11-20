#include <stdio.h>
#include <string.h>

int main() {
    char teams[4][50] = {
        "Mumbai Indians",
        "Chennai Super Kings",
        "Royal Challengers Bengaluru"
    };

    int choice;
    int teamCount = 3;

    while (1) {
        printf("\n--- IPL Menu ---\n");
        printf("1. View favorite 3 IPL teams\n");
        printf("2. Add a new team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nFavorite IPL Teams:\n");
            for (int i = 0; i < teamCount; i++) {
                printf("%d. %s\n", i + 1, teams[i]);
            }
        }
        else if (choice == 2) {
            if (teamCount < 4) {
                printf("Enter new team name: ");
                scanf(" %[^\n]", teams[teamCount]);
                teamCount++;
                printf("Team added successfully!\n");
            }
            else {
                printf("Team list is full!\n");
            }
        }
        else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        }
        else {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}