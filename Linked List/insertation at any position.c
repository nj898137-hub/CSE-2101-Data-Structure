#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *head = NULL;
    struct Node *newNode, *PTR;

    int value, position, i;

    // Create first node
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    // Create second node
    PTR = (struct Node *)malloc(sizeof(struct Node));
    PTR->data = 20;
    PTR->next = NULL;
    head->next = PTR;

    // Create third node
    PTR->next = (struct Node *)malloc(sizeof(struct Node));
    PTR = PTR->next;
    PTR->data = 30;
    PTR->next = NULL;

    // Take input
    printf("Enter value to insert: ");
    scanf("%d", &value);

    printf("Enter position: ");
    scanf("%d", &position);

    // Create new node
    newNode = (struct Node *)malloc(sizeof(struct Node));

    if (newNode == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }

    newNode->data = value;
    newNode->next = NULL;

    // Insert at first position
    if (position == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else if (position > 1)
    {
        PTR = head;

        for (i = 1; i < position - 1 && PTR != NULL; i++)
        {
            PTR = PTR->next;
        }

        if (PTR == NULL)
        {
            printf("Invalid position!");
            free(newNode);
            return 0;
        }

        newNode->next = PTR->next;
        PTR->next = newNode;
    }
    else
    {
        printf("Invalid position!");
        free(newNode);
        return 0;
    }

    // Display linked list
    PTR = head;
    while (PTR != NULL)
    {
        printf("%d -> ", PTR->data);
        PTR = PTR->next;
    }
    printf("NULL");
    return 0;
}
