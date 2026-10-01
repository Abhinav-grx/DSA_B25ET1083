#include <stdio.h>

struct student
{
    int roll;
    char name[20];
    float SGPA;
};

void create(struct student st[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\n--- Enter Student %d Data ---\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &st[i].roll);

        printf("Enter Name: ");
        scanf("%s", st[i].name);

        printf("Enter SGPA: ");
        scanf("%f", &st[i].SGPA);
    }
}

void display(struct student st[], int n)
{
    int i;

    printf("\n\n========== STUDENT DETAILS ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d", i + 1);
        printf("\nRoll No : %d", st[i].roll);
        printf("\nName    : %s", st[i].name);
        printf("\nSGPA    : %.2f\n", st[i].SGPA);
    }

    printf("\n=====================================\n");
}

int main()
{
    struct student st[100];
    int n;

    printf("Enter Number of Students: ");
    scanf("%d", &n);

    create(st, n);
    display(st, n);

    return 0;
}
```
