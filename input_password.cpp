#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main() {
	char password[15];
	int i;
	for (i = 0; i < 3; i++) {
		scanf("%s", &password);
		if ((strcmp(password, "123456")) == 0) {
			printf("������ȷ\n");
			break;
		}
		else {
			printf("�������\n");
		}
	}
	if (i == 3) {
		printf("�������������3��");
	}
	return 0;
}