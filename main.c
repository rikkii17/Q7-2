#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"app.h"
#include"config.h"
#include"helper.h"
#include"system_app.h"

//global variable


int main(void);

int main(void){
    static char string_buffer[MAX_BUFFER];
    FILE *output_file_pointer;
    BookData *new_book_data;

    global_book_data_head = NULL;

    input_book_data_from_file();

    /*while(1){

    }*/

    
    printf("check1");
    return 0;
}



