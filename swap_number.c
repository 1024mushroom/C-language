#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
	printf("a=%d,b=%d\n", *a, *b);
}
int main() {
	int a = 10;
	int b = 20;
	swap(&a, &b);
	return 0;
}