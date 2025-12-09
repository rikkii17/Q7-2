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
    printf("アプリケーションを起動中\n");
    static char string_buffer[MAX_BUFFER];
    FILE *output_file_pointer;
    BookData *new_book_data;

    global_book_data_head = NULL;

    input_book_data_from_file();
    printf("セットアップが完了しました。メニューを表示します。\n\n\n");

    while(1){
        printf("-----------------------\n");
        printf("図書管理システム\n");
        printf("1\t登録\n２\t一覧表示\n3\t検索\nE\t終了\n");
        printf(">");
        input_line(string_buffer,MAX_BUFFER,stdin);
        
        switch (string_buffer[0]){

            case '1':
                registry_add_data();
                
        }

        break;
    }

    
    printf("check5");
    return 0;
}



