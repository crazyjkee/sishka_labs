/*
 ============================================================================
 Name        : lab_5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	n15();
	return EXIT_SUCCESS;
}

void n14(){
	int i=1;
	int k=0;
	char string[100]="";
  unsigned char ch;
	//gets(string);
	//printf("Считана строка:\n%s\n",string);
	do {
	ch = getchar();// считывание символа
	if(ch==' '||ch=='\n'){
		printf("Закончилось %d слово,длина слова %d \n",i,k);
		++i;
		k=0;
	}else
		++k;

	//printf("Символ: %c\n", ch);//вывод
	 }
	 while ( ch !='\n');//проверка

}
