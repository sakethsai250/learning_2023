#include <stdio.h>
#include <stdlib.h>

struct stack *create_stack(int capacity)
{
    struct stack *stack;
    stack = (struct stack *)malloc(sizeof(struct stack));
    stack->capacity = capacity;
    stack->top = -1;
    stack->arr = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
}

void push(struct stack *stack, int number)
{
    if (stack->top = stack->capacity - 1)
    {
        printf("stack is full");
        return;
    }

    stack->arr[++stack->top] = number;
    printf("%d pushed to stack\n", item);
}

void pop(struct stack *stack)
{
    if (stack->top == -1)
    {
        printf("stack is empty");
        return;
    }
    int temp;
    temp = stack->top;
    stack->arr[--stack->top];
    free(temp);
}

struct stack
{
    int top;
    int capacity;
    int *arr;
};

void main()
{
    struct stack *stack = create_stack(100);
}
