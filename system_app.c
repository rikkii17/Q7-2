#include"config.h"
#include"helper.h"
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
        fscanf(input_file_pointer,"%s %s %s %d %s %s",book_name,author,publisher,&price,isbn,note);

        inport_book_data->book_name = string_duplicate(book_name);
        inport_book_data->author = string_duplicate(author);
        inport_book_data->publisher = string_duplicate(publisher);
        inport_book_data->price = price;
        inport_book_data->isbn = string_duplicate(isbn);
        inport_book_data->note = string_duplicate(note);
        inport_book_data->next = NULL;
        //それぞれのデータを構造体入力

        add_book_data(inport_book_data);
        if(feof(input_file_pointer)){
            fclose(input_file_pointer);
            return;
        }
    }

}

void input_line(char *string_buffer ,int datasize,FILE *filepointer){
    if(fgets(string_buffer,datasize,filepointer) == NULL){
        fprintf(stderr,"終了します\n");
        exit(0);
    }
    string_chop(string_buffer);
}

char *input_string(FILE *filepointer){
    static char string_buffer[MAX_BUFFER];
    char *string_pointer;

    input_line(string_buffer,MAX_BUFFER,filepointer);
    string_pointer = string_duplicate(string_buffer);
    return(string_pointer);
}

int input_number(FILE *filepointer){
    static char input_buffer[1024];
    int input_number;
    int status;

    while(1){
        input_line(input_buffer,MAX_BUFFER,filepointer);
        status = sscanf(input_buffer,"%d",&input_number);
        if(status != 1){
            printf("入力エラー:数値を入力してください\n");
            continue;
        }
        else{
            break;
        }
    }
return(input_number);
}

void input_data(BookData *bookdata_pointer){
    printf("署名>");
    bookdata_pointer->book_name = input_string(stdin);
    printf("著者>");
    bookdata_pointer->author =input_string(stdin);
    printf("出版社>");
    bookdata_pointer->publisher = input_string(stdin);
    printf("価格>");
    bookdata_pointer->price = input_number(stdin);
    printf("ISBN");


}