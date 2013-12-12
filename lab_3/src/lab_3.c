/*
 ============================================================================
 Name        : lab_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void n1() {
	int years;
	scanf("%i", &years);
	if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
		printf("Високосный\n");
	else
		printf("Невисокосный\n");
}

void n2(int year) {
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		puts("1");
	else
		puts("0");
}

void n3() {
	int i;
	scanf("%i", &i);

	if (i == 1 || i == 21 || i == 31 || i == 41 || i == 51 || i == 61 || i == 71
			|| i == 81 || i == 91)
		printf("Копейка");
	if ((i > 1 && i < 5) || (i > 21 && i < 25) || (i > 32 && i < 35)
			|| (i > 41 && i < 45) || (i > 51 && i < 55) || (i > 61 && i < 65)
			|| (i > 71 && i < 75) || (i > 81 && i < 85) || (i > 91 && i < 94))
		printf("%i копейки", i);
	else if ((i > 4 && i < 21) || (i > 25 && i < 31) || (i > 34 && i < 41)
			|| (i > 44 && i < 51) || (i > 54 && i < 61) || (i > 64 && i < 71)
			|| (i > 74 && i < 81) || (i > 84 && i < 91) || (i > 94 && i < 100))
		printf("%i копеек", i);
}

int main(void) {
	//n1();
	//n2(1900);
	n3();
	return EXIT_SUCCESS;
}
