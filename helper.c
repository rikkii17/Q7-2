#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"config.h"
#include"helper.h"

void string_chop(char *str){
int i;
for(i = 0;str[i] != '\n';i++);
    str[i] = '\0';
    return;
}

void *safe_malloc(size_t size){
    void *p;
    p = malloc(size);
    if(p == NULL){
        fprintf(stderr,"ƒƒ‚ƒŠŠm•Û‚ÉŽ¸”s‚µ‚Ü‚µ‚½!\n");
        exit(1);
    }
    return p;
}

char *string_duplicate(char *duplicate_string){
    char *duplicated_string_pointer;
    duplicated_string_pointer = (char *)safe_malloc(strlen(duplicate_string)+1);
    strcpy(duplicated_string_pointer,duplicate_string);
    return(duplicated_string_pointer);
}

void add_book_data(BookData *new_book_data){
    BookData *tail;
    new_book_data->next = NULL;

    if(global_book_data_head == NULL){
        global_book_data_head = new_book_data;
        return;
    }

    tail = global_book_data_head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    //––”ö‚Ìƒ|ƒCƒ“ƒ^‚ð’T‚·
    tail->next = new_book_data;
    return;
}

