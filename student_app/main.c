#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char phone[11];
    int age;
};

int main() {
    struct Student s;
    char query[20];
    int found = 0;

    FILE *file = fopen("data.txt", "r");
    if (!file) {
        printf("Error: could not open data.txt\n");
        return 1;
    }

    printf("Enter 10-digit phone number: ");
    scanf("%s", query);

    while (fscanf(file, "%s %s %d", s.name, s.phone, &s.age) == 3) {
        if (strcmp(s.phone, query) == 0) {
            printf("\nStudent found!\n");
            printf("Name: %s\n", s.name);
            printf("Phone: %s\n", s.phone);
            printf("Age: %d\n", s.age);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");

    fclose(file);
    return 0;
}
