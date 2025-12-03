#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"config.h"
#include"helper.h"

void chop(char *str){
int i;
for(i = 0;str[i] != '\n';i++);
    str[i] = '\0';
    return;
}

void *safe_malloc(size_t size){
    void *p;
    p = malloc(size);
    if(p == NULL){
        fprintf(stderr,"メモリ確保に失敗しました!\n");
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