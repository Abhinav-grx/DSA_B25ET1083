#include <stdio.h>
#define MAX 5
int stack[MAX];
int top = -1;
void push(int value)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        stack[++top] = value;
        printf("Pushed %d to stack.\n",value);
    }
}
void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped = %d\n", stack[top]);
        top--;
    }
}

int main()
{
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}

#include <stdio.h>
#define MAX 50
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
        printf("Stack Overflow\n");
    else
    {
        stack[++top] = value;
        printf("%d pushed to stack.\n", value);
    }
}

void pop()
{
    if (top == -1)
        printf("Stack Underflow\n");
    else
    {
        printf("Popped = %d\n", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
        printf("Stack is empty.\n");
    else
    {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}


#include <stdio.h>
#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
        printf("Queue Overflow\n");
    else
    {
        if (front == -1)
            front = 0;

        queue[++rear] = value;
        printf("Enqueued %d to queue.\n", value);
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Dequeued = %d\n", queue[front]);
        front++;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
