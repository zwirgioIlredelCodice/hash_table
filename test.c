#include "ht.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    ht* table = ht_create();

    
    ht_set(table, "1", (void*)666);
    ht_show(table);

    ht_delate(table, "1");
    ht_show(table);

    ht_destroy(table);
}