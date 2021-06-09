#include <stdio.h>
#include <stdlib.h>
#include "person.h"

Person *create_personne(char *firstName, char *lastName, Date *birthDate) {
    Person *res = malloc(sizeof(Person));

    res->firstName = firstName;
    res->lastName = lastName;
    res->birthDate = birthDate;

    return res;
}

void print_person(Person* p) {
    printf("%s, %s, ", p->firstName, p->lastName);
    print_date(p->birthDate);
}