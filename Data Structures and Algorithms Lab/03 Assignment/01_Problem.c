#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node * next;
} node;

void insert (node ** head, int data) {
    node * new = (node *) malloc (sizeof(node));
    new->data = data;
    new->next = (*head);
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
    node * prev = NULL;
    while (temp!=NULL) {
        if (temp->data == data) {
            prev->next = temp->next;
            free(temp);
            return;
        }
        prev = temp;
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
    while (temp!=NULL) {
        printf("%d->",temp->data);
        temp = temp->next;;
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