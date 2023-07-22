#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int num1 = 0;
	int num2 = 0;
	scanf("%d%d", &num1, &num2);
	int count = 0;
	int n = num1 ^ num2;
	while (n) {
		n = n & (n - 1);
		count++;
	}
	printf("count=%d\n", count);
	return 0;
}