#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};
void print(struct node *head)
{
    struct node *print = head;
    while (print != NULL)
    {
        printf("%d\n", print->data);
        print = print->link;
    }
};
void add_to_the_end(struct node *head, int data)
{
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr;
    ptr = head;
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
    struct node *head;
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current;
    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link = current;
    add_to_the_end(head, 100);
    print(head);
    return 0;

}