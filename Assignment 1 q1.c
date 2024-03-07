#include <stdio.h>

struct date {
    int day;
    int month;
    int year;
};

void initdate(struct date* ptrdate) {
    printf("Enter day, month, and year (in numeric format):\n");
    scanf("%d %d %d", &ptrdate->day, &ptrdate->month, &ptrdate->year);
}

void printDateOnConsole(struct date* ptrdate) {
    printf("Date: %d/%d/%d\n", ptrdate->day, ptrdate->month, ptrdate->year);
}

// Function to accept date from console
void acceptdatefromconsole(struct date* ptrdate) {
    printf("Enter updated day, month, and year (in numeric format):\n");
    scanf("%d %d %d", &ptrdate->day, &ptrdate->month, &ptrdate->year);
}

int main() {
    struct date myDate;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Initialize date\n");
        printf("2. Print date\n");
        printf("3. Accept date from console\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                initdate(&myDate);
                break;
            case 2:
                printDateOnConsole(&myDate);
                break;
            case 3:
                acceptdatefromconsole(&myDate);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
