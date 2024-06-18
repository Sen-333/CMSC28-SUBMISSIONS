#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>  

#define MAX_CAPACITY 5

typedef struct {
    char items[MAX_CAPACITY][50];  // Array to store kitchenware items
    int top;  // Index of the top element in the stack
} Stack;

// Function to initialize the stack
void initializeStack(Stack *stack) {
    stack->top = -1;  // Initialize top to -1 to indicate an empty stack
}

// Function to check if the stack is empty
bool isEmpty(Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
bool isFull(Stack *stack) {
    return stack->top == MAX_CAPACITY - 1;
}

// Function to push an item onto the stack
void push(Stack *stack, const char *item) {
    if (!isFull(stack)) {
        stack->top++;
        strcpy(stack->items[stack->top], item);  // Copy item into the stack
    } else {
        printf("The STACK is FULL. Cannot add kitchenware.\n");
    }
}

// Function to pop an item from the stack
char* pop(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top--];  // Return and decrement top
    } else {
        return NULL;  // Return NULL if stack is empty
    }
}

// Function to return the top item from the stack without removing it
char* peek(Stack *stack) {
    if (!isEmpty(stack)) {
        return stack->items[stack->top];  // Return the top item
    } else {
        return NULL;  // Return NULL if stack is empty
    }
}

// Function to print washing message for an item
void printWashingMessage(const char *item) {
    printf("%s is being washed.\n", item);
}

// Function to wash all items in the stack
void washAll(Stack *stack) {
    if (isEmpty(stack)) {
        printf("The STACK is EMPTY. No kitchenware to wash.\n");
        return;
    }

    printf("Washing all kitchenware:\n");
    while (!isEmpty(stack)) {
        printWashingMessage(pop(stack));  // Pop and print each item
    }
    printf("All kitchenware has been washed.\n");
}

// Function to make the stack empty
void makeEmptyStack(Stack *stack) {
    stack->top = -1;  // Reset top to -1 to make the stack empty
}

// Function to handle user choice based on menu option
void handleUserChoice(Stack *stack, char choice) {
    char kitchenware[50];
    switch (choice) {
        case '1':
            printf("Enter kitchenware to be washed: ");
            fgets(kitchenware, sizeof(kitchenware), stdin);
            push(stack, kitchenware);
            break;

        case '2':
            if (!isEmpty(stack)) {
                printWashingMessage(pop(stack));
            } else {
                printf("The STACK is EMPTY. No more kitchenware to wash.\n");
            }
            break;

        case '3':
            if (!isEmpty(stack)) {
                printf("%s is next to be washed.\n", peek(stack));
            } else {
                printf("The STACK is EMPTY. No kitchenware to wash.\n");
            }
            break;

        case '4':
            washAll(stack);
            break;

        case '5':
            makeEmptyStack(stack);
            printf("Stack has been emptied.\n");
            break;

        default:
            printf("Invalid choice. Please enter a valid option.\n");
    }
}

int main() {
    Stack kitchenwareStack;
    initializeStack(&kitchenwareStack);  // Initialize the stack

    while (true) {
        char choice[10];

        printf("\nKitchenware Washing Machine\n");
        printf("[1] Add kitchenware\n");
        printf("[2] Wash kitchenware\n");
        printf("[3] Top kitchenware\n");
        printf("[4] Wash all\n");
        printf("[5] Make stack empty\n");
        printf("[0] Exit\n");

        printf("Enter choice: ");
        fgets(choice, sizeof(choice), stdin);

        switch (choice[0]) {
            case '0':
                printf("Terminating the washing machine process.\n");
                exit(0);  // Exit the program
            default:
                handleUserChoice(&kitchenwareStack, choice[0]);
        }
    }

    return 0;
}