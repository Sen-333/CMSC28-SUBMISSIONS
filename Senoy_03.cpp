#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 100

typedef struct Customer
{
    char name[50];
    float total_amount;
} Customer;

typedef struct Queue
{
    Customer items[MAX_QUEUE_SIZE];
    int front, rear;
} Queue;

// Function to initialize the queue
void initiateQueue(Queue *q)
{
    q->front = q->rear = -1;
}

// Function to check if the queue is empty
int Empty(Queue *q)
{
    return q->front == -1;
}

// Function to check if the queue is full
int Full(Queue *q)
{
    return q->rear == MAX_QUEUE_SIZE - 1;
}

// Function to enqueue a customer into the queue
void Enqueue(Queue *q, Customer customer)
{
    if (Full(q))
    {
        printf("Queue overflow!\n");
        return;
    }
    if (Empty(q))
    {
        q->front = 0;
    }
    q->rear++;
    q->items[q->rear] = customer;
}

// Function to dequeue a customer from the queue
Customer Dequeue(Queue *q)
{
    if (Empty(q))
    {
        printf("Queue underflow!\n");
        Customer empty_customer = {"", 0.0f};
        return empty_customer;
    }
    Customer customer = q->items[q->front];
    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front++;
    }
    return customer;
}

// Function to peek at the front customer in the queue
Customer Peek(Queue *q)
{
    if (Empty(q))
    {
        printf("Queue is empty!\n");
        Customer empty_customer = {"", 0.0f};
        return empty_customer;
    }
    return q->items[q->front];
}

int main()
{
    Queue queue;
    initiateQueue(&queue);
    char store_name[50] = "Sentinels Store";
    int choice;

    while (1)
    {
        printf("\n%s Counter 0:\n", store_name);
        printf("[1] Fall in line\n");
        printf("[2] Serve customer\n");
        printf("[3] Next customer\n");
        printf("[4] Closing time\n");
        printf("[0] Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            Customer customer;
            printf("Enter customer name: ");
            scanf("%s", customer.name);
            printf("Enter total amount (up to 4 decimal places): ");
            scanf("%f", &customer.total_amount);
            Enqueue(&queue, customer);
            break;
        }
        case 2:
        {
            if (Empty(&queue))
            {
                printf("The QUEUE is EMPTY. No orders to serve.\n");
            }
            else
            {
                Customer customer = Dequeue(&queue);
                printf("Now serving %s with total amount payable of %.2f\n", customer.name, customer.total_amount);
            }
            break;
        }
        case 3:
        {
            if (Empty(&queue))
            {
                printf("The QUEUE is EMPTY. No order to serve.\n");
            }
            else
            {
                Customer customer = Peek(&queue);
                printf("Next order: For %s with total amount payable of %.2f\n", customer.name, customer.total_amount);
            }
            break;
        }
        case 4:
        {
            if (Empty(&queue))
            {
                printf("The QUEUE is EMPTY. No customer/s to serve.\n");
            }
            else
            {
                while (!Empty(&queue))
                {
                    Customer customer = Dequeue(&queue);
                    printf("Now serving %s with total amount payable of %.2f\n", customer.name, customer.total_amount);
                }
                printf("All customers have been served.\n");
            }
            break;
        }
        case 0:
        {
            printf("%s checkout system terminated.\n", store_name);
            return 0;
        }
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
