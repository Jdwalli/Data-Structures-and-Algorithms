#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
};

struct Node *head = NULL;

int stackLength()
{
    int length = 0;
    struct Node *current = head;
    while(current != NULL)
    {
        length++;
        current = current -> next;
    }
    return length;
}

void push(char element)
{
    struct Node *node = malloc(sizeof(struct Node));
    node -> data = element;
    node -> next = head;
    head = node;
}

char pop()
{
    struct Node *current;
    if (stackLength() == 0) {
        printf("Empty stack!");
    }
    
    current = head;
    head = head -> next;
    free(current);
    return current -> data;
}

char peek()
{
    struct Node *current = head;
    return current -> data;
}


void printStack()
{
    struct Node *current = head;
    while(current != NULL)
    {
         printf("%c -> ", current -> data);
         current= current -> next;
    }
    printf("NULL\n");
}

int main()
{
    push('a');
    push('b');
    push('c');
    printStack();
    pop();
    printStack();
    pop();
    printStack();

    return 0;
}