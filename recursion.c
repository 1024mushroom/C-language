#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int a) {
	if (a > 9) {
		print(a / 10);
	}
	printf("%d ", a % 10);
}
int main() {
	int num;
	scanf("%d", &num);
	print(num);
	return 0;
}