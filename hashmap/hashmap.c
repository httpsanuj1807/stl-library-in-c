#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include "map.h"

int main(){

    
    init_map();


    person vscode = {.name = "vscode", .age = 21};
    person leetcode = {.name = "leetcode", .age = 24};
    person wikipedia = {.name = "wikipedia", .age = 11};
    person meta = {.name = "meta", .age = 12};
    person google = {.name = "google", .age = 8};
    person javascript = {.name = "javascript", .age = 1};
    person python = {.name = "python", .age = 31};
    person shopping = {.name = "shopping", .age = 21};

    insert(&vscode);
    insert(&leetcode);
    insert(&wikipedia);
    insert(&meta);
    insert(&google);
    insert(&javascript);
    insert(&python);
    insert(&shopping);
    print_map();

    person* temp = find("meta");
    if(temp == NULL) printf("\nNot found");
    else printf("\nFound");
    temp = find("google");
    if(temp == NULL) printf("\nNot found\n");
    else printf("\nFound");
    temp = find("myntra");
    if(temp == NULL) printf("\nNot found\n");
    else printf("\nFound");

    return 0;

}