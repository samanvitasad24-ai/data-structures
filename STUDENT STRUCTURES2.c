#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int marks;
};
void acceptStudent(struct Student *s) {
    printf("Enter roll number: ");
    scanf("%d", &(*s).roll);
    printf("Enter name: ");
    scanf("%s", (*s).name);
    printf("Enter marks: ");
    scanf("%d", &(*s).marks);
}
void displayByValue(struct Student s) {
    printf("\n[Call by Value]\n Roll: %d,\n Name: %s,\n Marks: %d\n", s.roll, s.name, s.marks);
}
void displayByReference(struct Student *s) {
    printf("\n[Call by Reference]\n Roll: %d,\n Name: %s,\n Marks: %d\n", (*s).roll, (*s).name, (*s).marks);
}

int main() {
    struct Student s;
    acceptStudent(&s);
    displayByValue(s);
    displayByReference(&s);

    return 0;
}
