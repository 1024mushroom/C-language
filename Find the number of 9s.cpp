#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int num = 0;
	for (int i = 1; i <= 100; i++) {
		if (i % 10 == 9) {
			num++;
		}
		if (i / 10 == 9) {
			num++;
		}
	}
	printf("%d\n", num);
	return 0;
}