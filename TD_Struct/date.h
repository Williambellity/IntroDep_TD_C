#ifndef DATE
#define DATE

typedef struct _DATE {
    int day;
    int month;
    int year;
} Date;

Date *create_date(int day, int month, int year);
void print_date(Date *date);


#endif 