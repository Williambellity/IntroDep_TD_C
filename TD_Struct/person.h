#include "date.h"

#ifndef PERSON
#define PERSON

typedef struct _PERSON {
    char *firstName;
    char *lastName;
    Date *birthDate;

} Person;

Person *create_personne(char *firstName, char *lastName, Date *birthDate);

void print_person(Person* p);

#endif 