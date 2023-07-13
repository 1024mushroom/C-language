#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char password[15];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%s", &password);
		if ((strcmp(password, "123456")) == 0) {
			printf("输入正确\n");
			break;
		}
		else {
			printf("输入错误\n");
		}
	}
	if (i == 3) {
		printf("输入密码均错误3次");
	}
	return 0;
}