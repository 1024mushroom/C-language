#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main() {
	char arr[20] = { 0 };
	system("shutdown -s -t 30");
again:
	printf("������\"����ɵ��\"��������Խ�����30���ڹػ�\n");
	scanf("%d", arr);
	if (strcmp(arr, "����ɵ��") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;
	}
	return 0;
}