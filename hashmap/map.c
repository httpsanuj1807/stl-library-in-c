#include "map.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


person* hash_table[TABLE_SIZE];

void init_map(){

    for(int i = 0; i < TABLE_SIZE; i++){

        hash_table[i] = NULL;

    }

}

int hash(char* name){

    int name_len = strlen(name);
    unsigned long long hash_value = 0;
    int common_base = 31;

    for(int i = 0; i < name_len; i++){

        hash_value = (hash_value * common_base + (unsigned char) name[i]) % TABLE_SIZE;

    }

    return (int) hash_value;

}


void print_map(){

    printf("START\n");

    for(int i = 0; i < TABLE_SIZE; i++){

        if(hash_table[i] == NULL){

            printf("%d\tNULL\n", i);

        }
        else{

            person* temp = hash_table[i];

            printf("%d\t", i);

            while(temp){

                printf("%s ", temp -> name);
                temp = temp -> next;

            }

            printf("\n");

        }

    }
    printf("END\n");

}

bool insert(person *p){

    if(p == NULL) return false;  // accidental insert
    
    int index = hash(p -> name);

    // there is a scope for checking duplicate entry here

    p -> next = hash_table[index];
    hash_table[index] = p;

    return true;

}

person* find(char *name){

    int index = hash(name);
    person* temp = hash_table[index];
    
    while(temp != NULL && (strcmp(temp -> name, name) != 0)) temp = temp -> next;

    return temp;

}


person* erase(char* name){

    int index = hash(name);

    if(hash_table[index] != NULL){

        person* temp = hash_table[index];

        if(strcmp(temp -> name, name) == 0){  // if its a head

            person* to_free = temp -> next;
            hash_table[index] = temp -> next;
            return to_free;

        }

        person* prev = temp;
        temp = temp -> next;
        
        while(temp){

            if(strcmp(temp -> name, name) == 0){

                person* to_free = temp;
                prev -> next = temp -> next;
                return to_free;

            }

            temp = temp -> next;
            prev = temp;

        }

    }

    return NULL;

}

