//Implimentation of Queue using Array
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
}node;


typedef struct queue
{
    node *head; 
    node *tail;
}queue;

void init_queue(queue *q)
{
    q->head = NULL;
    q->tail = NULL;
}

bool enqueue(queue *q, int data)
{
    node *new_node = (node *)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Memory Error! \n");
        return false;
    }
    new_node->data = data;
    new_node->next = NULL;
    if(q->head == NULL)
    {
        q->head = new_node;
        q->tail = new_node;
    }
    else
    {
        q->tail->next = new_node;
        q->tail = new_node;
    }
    return true;
}

int dequeue(queue *q)
{
    if(q->head == NULL)
    {
        printf("Queue is Empty! \n");
        return -1;
    }
    node *temp = q->head;
    int data = temp->data;
    q->head = q->head->next;
    free(temp);
    return data;
}

void print_queue(queue *q)
{
    node *temp = q->head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    queue q;
    init_queue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    print_queue(&q);
    printf("Dequeue: %d \n", dequeue(&q));
    printf("Dequeue: %d \n", dequeue(&q));
    printf("Dequeue: %d \n", dequeue(&q));
    printf("Dequeue: %d \n", dequeue(&q));
    printf("Dequeue: %d \n", dequeue(&q));
    printf("Dequeue: %d \n", dequeue(&q));
    return 0;
}