/*
 ============================================================================
 Name        : Test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

	int cmp(const void *a, const void *b) {
	     return *(int*)a - *(int*)b;
	 }
	int main (void){
		int size = 5, i = 0;
		  char str[100];
		  puts("Введите пять цифр через пробел");
		  scanf ("%[^\n]", str);
		  int list[size];
		  char * pch;
		  pch = strtok (str," ");
		  list[i] = atoi(pch);
		  i++;
		  while (pch != NULL)
		  {
		    pch = strtok (NULL, " ");
		    if(pch != NULL)
		      list[i] = atoi(pch);
		    i++;
		  }
		  qsort(list, size, sizeof(int), cmp ); // СОРТИРУЕМ
		  for(i=0;i<size;i++){
		    printf("%d\n",list[i]);
		  }
		  return 0;}


