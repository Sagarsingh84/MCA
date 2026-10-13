
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev, *next;
};

int main()
{
    struct node *head = NULL, *temp, *newnode;
    int n, i;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));

        printf("Enter data: ");
        scanf("%d", &newnode->data);

        if (head == NULL)
        {
            head = newnode;
            newnode->next = head;
            newnode->prev = head;
            temp = newnode;
        }
        else
        {
            newnode->next = head;
            newnode->prev = temp;
            temp->next = newnode;
            head->prev = newnode;
            temp = newnode;
        }
    }

    printf("Doubly Circular Linked List: ");

    if (head != NULL)
    {
        temp = head;

        do
        {
            printf("%d <-> ", temp->data);
            temp = temp->next;
        } while (temp != head);
    }

    printf("HEAD");
    return 0;
}
