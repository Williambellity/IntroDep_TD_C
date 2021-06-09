#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List *create_list(Date *date) {
    List *res = malloc(sizeof(List));
    res->value = date;
    res->next = NULL;
    return res;
}

List *insert(Date *date, List *list) {
    List *new_list = create_list(date);
    new_list->next = list;

    return new_list;
}

void print_list(List *list) {
    printf("[");
    while (list->next != NULL) {
        print_date(list->value);
        printf(", ");
        list = list->next;
    }
    print_date(list->value);
    printf("]");
}

