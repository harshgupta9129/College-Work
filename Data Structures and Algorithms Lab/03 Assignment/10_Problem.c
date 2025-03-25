#include<stdio.h>
#include<stdlib.h>

typedef struct queue {
    int data;
    struct queue * next;
} queue;

void enqueue (queue ** front,queue ** rear, int data) {
    queue * new = (queue *) malloc(sizeof(queue));
    new->data = data;
    new->next = NULL;
    if (*front == NULL) {
        *front = new;
        *rear = new; 
        return;       
    }
    (*rear)->next = new;
    *rear = new; 
}

void dequeue (queue ** front,queue ** rear, int data) {
    if (*front==NULL) {
        print("Queue is Empty\n");
    }
    if ((*front)->data = data) {
        queue * temp = *front;
        *front = NULL;
        *rear = NULL;
        free(temp);;
        return;
    }
    queue * temp = *front;
    queue * prev = NULL;
    while (temp->) {
        if (temp->data = NULL) {

        }
    }
}

void print( queue * front) {
    while (front != NULL) {
        printf("%d->",front->data);
        front = front->next;
    }
    printf("NULL\n");
}

int main () {
    queue * front = NULL;
    queue * rear = NULL;
    enqueue(&front,&rear,1);
    enqueue(&front,&rear,2);
    enqueue(&front,&rear,3);
    enqueue(&front,&rear,4);
    print(front);
    return 0;
}