#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

typedef struct stack
{
    node *top;
}stack;

void init_stack(stack *s)
{
    s->top = NULL;
}

bool push(stack *s, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Memory Error! \n");
        return false;
    }
    new_node->data = data;
    new_node->next = NULL;
    if(s->top == NULL)
    {
        s->top = new_node;
    }
    else
    {
        new_node->next = s->top;
        s->top = new_node;
    }
    return true;
}

int pop(stack *s)
{
    if(s->top == NULL)
    {
        printf("Stack is Empty! \n");
        return -1;
    }
    node *temp = s->top;
    int data = temp->data;
    s->top = s->top->next;
    free(temp);
    return data;
}

int main()
{
    stack s;
    init_stack(&s);
    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    printf("%d ", pop(&s));
    printf("%d ", pop(&s));
    printf("%d ", pop(&s));
}

