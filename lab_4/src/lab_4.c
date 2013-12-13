/*
 ============================================================================
 Name        : lab_4.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cmp(const void *a, const void *b) {
	return *(int*) a - *(int*) b;
}
int n1() {
	int n, i, j = 1;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++) { // ЧИТАЕМ ВХОД
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), cmp); // СОРТИРУЕМ
	for (i = 1; i < n - 1; i++) { // ВЫВОДИМ РЕЗУЛЬТАТ
		j = j * a[i];

	}
	printf("%d ", j);
	return 0;
}

void n2() {
	int n, i, g = 0, h, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0 && g == 0)
			g = i;
		else if (a[i] == 0)
			h = i;
	}
	for (i = g; i < h; i++)
		s += a[i];
	printf("%d", s);
}

void n3() {
	int n, i, g = 0, h, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = n; i >= 0; i--) {
		scanf("%d", &a[i]);
		if (a[i] > 0 && g == 0)
			g = n - i;
	}
	for (i = 0; i < g; i++)
		s += a[i];
	printf("%d", s);
}

void n4() {
	int n, i, g = 0, h, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > 0 && g == 0)
			g = i;
		else if (a[i] > 0)
			h = i;
	}
	for (i = g + 1; i < h; i++) {
		s += a[i];
	}
	printf("%d", s);
}

void n5() {
	int n, i, g = 0, h, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0 && g == 0)
			g = i;
		else if (a[i] == 0)
			h = i;
	}
	for (i = g; i < h; i++) {
		s *= a[i];
	}
	printf("%d", s);
}

void n6() {
	int n, i, g = 0, h = 0, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 1; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0 && g == 0)
			g = i + 1;
		else if (a[i] < 0 && h == 0)
			h = i;
	}
	for (i = g; i < h; i++) {
		s += a[i];
	}
	printf("%d", s);
}

void n7() {
	int n, i, j = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)  // ЧИТАЕМ ВХОД
		scanf("%d", &a[i]);
	int min = a[0];
	for (i = 0; i < n; i++)
		if (min < a[i])
			min = i;
	for (i = 0; i < min - 1; i++)  // ВЫВОДИМ РЕЗУЛЬТАТ
		j = j + a[i];
	printf("%d \n", j);
}

void n8() {
	int n, i, j = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)  // ЧИТАЕМ ВХОД
		scanf("%d", &a[i]);
	int min = a[0];
	for (i = 0; i < n; i++)
		if (min < a[i])
			min = i + 2;
	for (i = min; i < n; i++)  // ВЫВОДИМ РЕЗУЛЬТАТ
		j = fabs(j) + fabs(a[i]);
	printf("%d \n", j);
}

void n9() {
	int n, i, h, s = 0;

		scanf("%d", &n);
		int a[n];
		for (i = 0; i <= n; i++) {
			scanf("%d", &a[i]);
			if (a[i] == 0)
				h = i;
		}
		for (i = h; i <= n; i++) {
			s += a[i];
		}
		printf("%d", s);
}

void n10() {
	int n, i, j = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)  // ЧИТАЕМ ВХОД
		scanf("%d", &a[i]);
	int min = a[0];
	for (i = 0; i < n; i++)
		if (min < a[i])
			min = i + 2;
	for (i = min; i < n; i++)  // ВЫВОДИМ РЕЗУЛЬТАТ
		j = fabs(j) + fabs(a[i]);
	printf("%d \n", j);
}
void n11() {
	int n, i, j = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++)  // ЧИТАЕМ ВХОД
		scanf("%d", &a[i]);
	int min = a[0];
	for (i = 0; i < n; i++)
		if (min < a[i])
			min = i + 2;
	for (i = min; i < n; i++)  // ВЫВОДИМ РЕЗУЛЬТАТ
		j = j + a[i];
	printf("%d \n", j);
}

void n12() {
	int n, i, g = 0, h = 0, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] > 0 && g == 0)
			g = i + 1;
	}
	for (i = g; i <= n; i++) {
		s += a[i];
	}
	printf("%d", s);
}

void n13() {
	int n, i, g = 0, h = 0, s = 0;

	scanf("%d", &n);
	int a[n];
	for (i = 0; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0 && g == 0)
			g = i + 1;
	}
	for (i = g; i <= n; i++) {
		s = fabs(s) + fabs(a[i]);
	}
	printf("%d", s);
}
void n14() {
	int n, i, g = 0, h = 0, s = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] == 0 && g == 0)
			g = i + 1;
	}
	for (i = g; i <= n; i++) {
		s = fabs(s) + fabs(a[i]);
	}
	printf("%d", s);
}
void n15() {
	int n, i, g = 0, h = 0, s = 0;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i <= n; i++) {
		scanf("%d", &a[i]);
		int max = a[0];
		if (max < a[i])
			g = i + 1;
	}
	for (i = 0; i < g; i++) {
		s = s + a[i];
	}
	printf("%d", s);
}

void n16(){
	int n, i, g = 0, h = 0, s = 1;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i <= n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < 0 && g == 0)
			g = i + 1;
		else if (a[i] < 0)
			h = i;
	}
	for (i = g; i < h; i++) {
		s *= a[i];
	}
	printf("%d", s);
}

int main() {
	puts("Введи размер массива\n");
	//n1();
	// n2();
	// n3();
	//n4();
	//n5();
	//n6();
	//n7();
	// n8();
	n9();
	//n10();
	//n11();
	//n12();
	//n13();
	//n14();
	//n15();
	//n16();

	return EXIT_SUCCESS;
}
