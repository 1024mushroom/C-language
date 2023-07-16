#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game() {
	int num = 0;
	int random = rand() % 100 + 1;
	while (1) {
		printf("请输入数字：\n");
		scanf("%d", &num);
		if (num > random) {
			printf("大了\n");
		}
		else if (num < random) {
			printf("小了\n");
		}
		else {
			printf("正确\n");
			break;
		}
	}
	
	return 0;
}
int main() {
	int cont = 0;
	srand((unsigned int)time(NULL));
	printf("*********猜数字游戏*************\n");
	printf("*******1.猜数字**0.退出*******\n");
	printf("******************************\n");
	do {
		printf("请输入选项：\n");
		scanf("%d", &cont);
		switch (cont) {
		case 1: game();
			break;
		case 0: break;
		}
	} while (cont);
	return 0;
}