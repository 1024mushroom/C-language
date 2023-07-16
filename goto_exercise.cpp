#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char arr[20] = { 0 };
	system("shutdown -s -t 30");
again:
	printf("请输入\"我是傻逼\"，否则电脑将会在30秒内关机\n");
	scanf("%d", arr);
	if (strcmp(arr, "我是傻逼") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}