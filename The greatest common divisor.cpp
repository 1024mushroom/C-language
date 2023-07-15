#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a, b;
	scanf("%d%d", &a, &b);
	int r;
	while (a % b) {
		r = a % b;
		a = b;
		b = r;
	}
	printf("%d\n", b);
	return 0;
}