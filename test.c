#include "ht.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    ht* table = ht_create();
    ht* table1 = ht_create();

    int sus = 123;

    ht_set(table1, "1", &sus);

    ht_set(table, "vale", table1);

    void* value;

    value = ht_get(table, "value");
    printf("%d\n", value);
    ht_destroy(table);
    ht_destroy(table1);
}