#include "date.h"

#ifndef LIST
#define LIST

typedef struct _LIST {
    Date* value;
    struct _LIST *next;

} List;

List *create_list(Date *date);

List *insert(Date *date, List *list);

void print_list(List *list);



#endif