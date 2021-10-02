# hash table
a simple c hash table implementation based on https://benhoyt.com/writings/hash-table-in-c/ project
## can
* store different data types (data allocated as null* (null pointer))
* set, get, delate values
* expand and reduce automatically

## usage
funtion | description | example
------- | ----------- | -------
`ht* ht_create(void);` | create hash table | `ht* table = ht_create();`
`void ht_destroy(ht* table);` | destroy hash table | `ht_destroy(table);`
`void* ht_get(ht* table, const char* key);`| Get item with given key (NUL-terminated) from hash table | `ht_get(table, "key_one");`
`const char* ht_set(ht* table, const char* key, void* value);`| Set item with given key (NUL-terminated) to value (which must not be NULL) | `ht_set(table, "key_1", (void*)1);`
`void ht_delate(ht* table, const char* key);` | Delate item with given key (NUL-terminated) from hash table | `ht_delate(table, "key_1");`
`void ht_show(ht* table);` | Show table items | `st_show(table);`

## example
see `test.c` file 
### to run
you need **gcc** and **make**
run `make` and `make run`

## work in progress
this projet is work in progress status and i am not so god so if you find ways to improve this proyect consider to make a pull request :)