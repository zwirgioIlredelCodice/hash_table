#include "ht.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    ht* table = ht_create();

    
    ht_set(table, "1", (void*)666);
    ht_set(table, "2", (void*)34);
    ht_show(table);
    ht_set(table, "3", (void*)234);
    ht_set(table, "4", (void*)666);
    ht_show(table);
    ht_set(table, "5", (void*)34);
    ht_set(table, "6", (void*)234);
    ht_show(table);

    ht_delate(table, "1");
    ht_delate(table, "2");
    ht_show(table);
    ht_delate(table, "3");
    ht_delate(table, "4");
    ht_show(table);

    ht_destroy(table);
}