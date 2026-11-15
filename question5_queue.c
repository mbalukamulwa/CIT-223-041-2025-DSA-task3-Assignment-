#include <stdio.h>

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow: the queue is full.\n");
        return;
    }

    if (front == -1)
        front = 0;

    rear++;
    queue[rear] = value;

    printf("%d inserted into the queue.\n", value);
}

void dequeue(void)
{
    int deletedValue;

    if (front == -1)
    {
        printf("Queue Underflow: the queue is empty.\n");
        return;
    }

    deletedValue = queue[front];
    printf("Deleted element: %d\n", deletedValue);

    if (front == rear)
    {
        /* Reset both pointers when the last element is removed. */
        front = rear = -1;
    }
    else
    {
        front++;
    }
}

void display(void)
{
    int i;

    if (front == -1)
    {
        printf("Queue is empty.\n");
        return;
    }

    printf("Queue elements (front to rear): ");
    for (i = front; i <= rear; i++)
        printf("%d ", queue[i]);

    printf("\n");
}

int main(void)
{
    int choice, value;

    do
    {
        printf("\n--- LINEAR QUEUE OPERATIONS ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input.\n");
            return 1;
        }

        switch (choice)
        {
            case 1:
                printf("Enter value: ");
                if (scanf("%d", &value) != 1)
                    return 1;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Program ended.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
