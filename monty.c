#include <stdio.h>
#include <stdlib.h>

typedef struct stack {
    int value;
    struct stack *next;
} stack;

void push(stack **head, int value) {
    stack *new_node = malloc(sizeof(stack));
    new_node->value = value;
    new_node->next = *head;
    *head = new_node;
}

void pall(stack *head) {
    stack *current = head;
    while (current != NULL) {
        printf("%d ", current->value);
        current = current->next;
    }
}

int main() {
    stack *head = NULL;
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    pall(head);  // prints 3, 2, 1
    return 0;
}

