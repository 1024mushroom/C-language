#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int game() {
	int num = 0;
	int random = rand() % 100 + 1;
	while (1) {
		printf("���������֣�\n");
		scanf("%d", &num);
		if (num > random) {
			printf("����\n");
		}
		else if (num < random) {
			printf("С��\n");
		}
		else {
			printf("��ȷ\n");
			break;
		}
	}
	
	return 0;
}
int main() {
	int cont = 0;
	srand((unsigned int)time(NULL));
	printf("*********��������Ϸ*************\n");
	printf("*******1.������**0.�˳�*******\n");
	printf("******************************\n");
	do {
		printf("������ѡ�\n");
		scanf("%d", &cont);
		switch (cont) {
		case 1: game();
			break;
		case 0: break;
		}
	} while (cont);
	return 0;
}