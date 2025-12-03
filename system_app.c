#include"helper.h"
#include"config.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void input_book_data_from_file(void){
    FILE *input_file_pointer;
    BookData *inport_book_data;

    static char book_name[MAX_BUFFER];
    static char author[MAX_BUFFER];
    static char publisher[MAX_BUFFER];
    int price;
    static char isbn[MAX_BUFFER];
    static char note[MAX_BUFFER];

    input_file_pointer = fopen("book_list.txt","r");
    
    if(input_file_pointer==NULL)    return;
    while(1){
        inport_book_data = (BookData *)safe_malloc(sizeof(BookData));
        fscanf(input_file_pointer,"%s %s %s %d %s %s",book_name,author,publisher,price,isbn,note);

        inport_book_data->book_name = string_duplicate(book_name);
    }

}