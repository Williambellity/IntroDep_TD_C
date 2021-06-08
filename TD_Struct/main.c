#include <stdio.h>
#include <stdlib.h>
#include "date.h"

int main(void) {
    Date *d = create_date(10,1,1990);
    print_date(d);
}