#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void get_binary(int num) {
	int i = 0;
	//偶数位
	printf("偶数位：\n");
	for (i = 31; i >= 1; i=i-2) {
		printf("%d", (num >> i) & 1);
	}
	printf("\n");
	printf("奇数位：\n");
	for (i = 30; i >= 0; i = i - 2) {
		printf("%d", (num >> i) & 1);
	}
}
int main() {
	int num = 0;
	scanf("%d", &num);
	get_binary(num);
	return 0;
}