#include <stdio.h>
#include <stdlib.h>
#include "date.h"
#include "person.h"
#include "list.h"

int main(void) {
    Date *d = create_date(10,1,1990);
    print_date(d);
    printf("\n");
    
    Person *p = create_personne("John", "Doe", create_date(10,3,1999));
    print_person(p);
    printf("\n");


    List *l = create_list(create_date(10,3,1999));
    print_list(l);
    printf("\n");

    List *new_list = insert(create_date(10,1,1990), l);
    print_list(new_list);
    printf("\n");



    
}