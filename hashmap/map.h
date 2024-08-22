// this file a header file for my hashmap implementation
// this contains function declarations and type definations

#include <stdbool.h>

#define MAX_SIZE_NAME 256
#define TABLE_SIZE 10

typedef struct person{

    char name[MAX_SIZE_NAME];
    int age;
    struct person* next;

} person;


void init_map();


// hash function that returns index to store at the hash table
int hash(char* name);

// print the hash table array
void print_map();


// return true after inserting
bool insert(person *p);

// return NULL if not found, else the address of the object found
person* find(char *name);

// return NULL, if not found, if deleted return the address of deleted object
person* erase(char* name);