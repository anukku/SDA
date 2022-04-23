#include <stdio.h>
#include <math.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void count_of_nodes(struct node *head)
{
    int count = 0;
    if (head == NULL)
        printf("Linked list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("%d\n", count);
};
void print_data(struct node *head)
{
    struct node *print = head;
    while (print != NULL)
    {
        printf("%d\n", print->data);
        print = print->link;
    }
};
void add_at_end(struct node *head, int data)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
};
int main()
{
    struct node *head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    head->link->link = current;
    
    add_at_end(head, 67);
    count_of_nodes(head);
    print_data(head);
    return 0;
}