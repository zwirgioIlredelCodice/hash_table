#include "ht.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    ht* table = ht_create();

    int decision  = 0;
    char key_insert[50];
    int value_insert;

    while (true)
    {
        printf("1 for exit, 2 for insert, 3 for get, 4 for delate, 5 for show ");
        scanf("%d", &decision);

        if (decision == 2) {
            printf("insert key: ");
            scanf("%s", key_insert);
            printf("insert value: ");
            scanf("%d", &value_insert);
            ht_set(table, key_insert, (void*)value_insert);
        }
        else if (decision == 3)
        {
            printf("insert key: ");
            scanf("%s", key_insert);
            printf("%d\n", ht_get(table, key_insert));
        }
        
        else if (decision == 4)
        {
            printf("insert key: ");
            scanf("%s", key_insert);
            ht_delate(table, key_insert);
        }
        else if (decision == 5)
        {
            ht_show(table);
        }
        else if (decision == 1)
        {   
            break;
        }
        else
        {
            printf("not an option\n");
        }
    }
}