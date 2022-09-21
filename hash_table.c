#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "hash_table.h"

typedef struct entry entry_t;

struct entry
{
  int key;       // holds the key
  char *value;   // holds the value
  entry_t *next; // points to the next entry (possibly NULL)
};

struct hash_table
{
  entry_t *buckets[17];
};

entry_t *creat_NULL_entry()
{
    entry_t *result = NULL;
    return result;
}

 ioopm_hash_table_t *ioopm_hash_table_create()
{
  /// Allocate space for a ioopm_hash_table_t = 17 pointers to
  /// entry_t's, which will be set to NULL
  ioopm_hash_table_t *result = calloc(1, sizeof(ioopm_hash_table_t));
  for (int i = 0; i<=17; i++)
  {
    entry_t *null_entry = creat_NULL_entry();
    result->buckets[i] = null_entry;
  }
  return result;
}



void ioopm_hash_table_destroy(ioopm_hash_table_t *ht) {
    free(ht);
    }













int main()
{
  return 0;
}


