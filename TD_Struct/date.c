#include "date.h"
#include <stdio.h>
#include <stdlib.h>

Date *create_date(int day, int month, int year) {
    Date *res = malloc(sizeof(Date));

    res->day = day;
    res->month = month;
    res->year = year;

    return res;
}

void print_date(Date *date) {
    printf("%i/%i/%i", date->day, date->month, date->year);
}

