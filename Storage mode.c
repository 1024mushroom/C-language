#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Check_sys() {
	int a = 1;
	//返回 1 就是小端，返回 0 就是大端
	return *(char*)&a;
}
int main() {
	//判断当前存储模式是大端还是小端
	int num = Check_sys();
	if (num == 1) {
		printf("小端\n");
	}
	else {
		printf("大端\n");
	}
	return 0;
}