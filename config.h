#ifndef CONFIG_H
#define CONFIG_H
#include<stdlib.h>
/*
一冊当たりのデータを保持する構造体
各要素の大きさを動的に変更するっため、(malloc)各要はpoint型にする
*/

typedef struct BookData_tag{
    char *book_name;
    char *author;
    char *publisher;
    int price;
    char *isbn;
    char *note;
    struct BookData_tag *next;
} BookData;

#define MAX_BUFFER 1024

BookData *global_book_data_head;

#endif // CONFIG_H