#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct SinglyLinkedListNode {
    int data;
    struct SinglyLinkedListNode* next;
} SinglyLinkedListNode;

typedef struct SinglyLinkedList {
    SinglyLinkedListNode* head;
    SinglyLinkedListNode* tail;
} SinglyLinkedList;

SinglyLinkedListNode* create_singly_linked_list_node(int node_data) {
    SinglyLinkedListNode* node = malloc(sizeof(SinglyLinkedListNode));
    node->data = node_data;
    node->next = NULL;
    return node;
}

void insert_node_into_singly_linked_list(SinglyLinkedList** singly_linked_list, int node_data) {
    SinglyLinkedListNode* node = create_singly_linked_list_node(node_data);
    if (!(*singly_linked_list)->head) {
        (*singly_linked_list)->head = node;
    } else {
        (*singly_linked_list)->tail->next = node;
    }
    (*singly_linked_list)->tail = node;
}

void printLinkedList(SinglyLinkedListNode* head) {
    while (head != NULL) {
        printf("%d\n", head->data);
        head = head->next;
    }
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);
        if (!line) break;
        data_length += strlen(cursor);
        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') break;
        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);
        if (!data) break;
        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') data[data_length - 1] = '\0';
    return realloc(data, data_length);
}

int main() {
    SinglyLinkedList* llist = malloc(sizeof(SinglyLinkedList));
    llist->head = NULL;
    llist->tail = NULL;

    char* llist_count_str = readline();
    int llist_count = strtol(llist_count_str, NULL, 10);

    for (int i = 0; i < llist_count; i++) {
        char* llist_item_str = readline();
        int llist_item = strtol(llist_item_str, NULL, 10);
        insert_node_into_singly_linked_list(&llist, llist_item);
    }

    printLinkedList(llist->head);
    return 0;
}
