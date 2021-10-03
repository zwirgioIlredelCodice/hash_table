// example to show how to set a table value with a table
// compile woth gcc table_in_table.c ht.c -o table_in_table

#include <stdio.h>
#include <stdlib.h>
#include "ht.h"

int main() {
    ht* table = ht_create();
    ht* t_inside = ht_create();

    ht_set(table, "table_in_table", t_inside);

    ht_set((ht*)ht_get(table,"table_in_table"), "v1", (void*)666);

    void* var = ht_get((ht*)ht_get(table,"table_in_table"), "v1");
    printf("%d", var);
}