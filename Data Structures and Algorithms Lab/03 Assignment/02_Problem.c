#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node * next;
    struct node * prev;
} node;

void insert (node ** head, int data) {
    node * new = (node *) malloc (sizeof(node));
    new->data = data;
    new->next = (*head);
    new->prev = NULL;
    if (*head == NULL) {
        *head = new;
        return;
    }
    (*head)->prev = new;
    *head = new;
}

void delete (node ** head, int data) {
    node * temp = *head;
    if (temp==NULL) {
        printf("Linked List is Empty\n");
        return;
    }
    if (temp->data == data) {
        free(temp);
        *head = NULL;
        return;
    }
    while (temp!=NULL) {
        if (temp->data == data) {
            node * previous = temp->prev;
            previous->next = temp->next;
            (temp->next)->prev = previous;
            free(temp);
            return;
        }
        temp = temp->next;
    }
    printf("No Found\n");
}

void search (node * head, int data) {
    node * temp = head;
    while (temp != NULL) {
        if (temp->data == data) {
            printf("Successfully Found\n");
            return;
        }
        temp = temp->next;
    }
    printf("No Found\n");
}

void print(node * head) {
    node * temp = head;
    if (temp == NULL) {
        printf("Linked List is Empty\n");
    }
    printf("NULL<->");
    node * previous = NULL;
    while (temp!=NULL) {
        printf("%d<->",temp->data);
        previous = temp;
        temp = temp->next;;
    }
    printf("NULL\n");
    printf("NULL<->");
    while (previous!=NULL) {
        printf("%d<->",previous->data);
        previous = previous->prev;
    }
    printf("NULL\n");
}

int main () {
    node * head = NULL;
    insert (&head,1);
    insert (&head,2);
    insert (&head,3);
    insert (&head,4);
    delete (&head,2);
    search (head,3);
    print(head);
    return 0;
}