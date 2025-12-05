#ifndef COMPONENT_H
#define COMPONENT_H
//include
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"config.h"

void string_chop(char *str);
/*
    文字列から改行を取り除く関数(chopの変更型)
    引数1: char *str  改行を取り除く対象の文字列ポインタ
    戻り値: void
*/

void *safe_malloc(size_t size);
/*
    メモリ確保を安全に行う関数(my_mallocの変更型)
    引数1: size_t size  確保するメモリのサイズ  //size_tはstdlib.hで定義されている符号なし整数型
    戻り値: void* 確保したメモリのポインタ
*/

char *string_duplicate(char *duplicate_string);
/*
    duplicate_stringを複製して返り値にそのポインタを返す関数
    引数1:duplicate_string  複製する文字列の先頭pointer
    返り値:char*    複製した文字列のメモリの先頭pointer
*/

void add_book_data(BookData *new_book_data);

#endif // COMPONENT_H