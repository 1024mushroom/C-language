#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int combination(int stepss);
int main() {
	int steps;
	printf("������̨������\n");
	scanf("%d", &steps);
	int count = combination(steps);
	printf("��%d�����\n", count);
	return 0;
}
int combination(int stepss) {
	int a = 1;
	int b = 2;
	int counts = 0;
	if (stepss == 1 || stepss == 2) {
		return stepss;
	}
	else {
		for (int i = 3; i <= stepss; i++) {
			counts = a + b;
			a = b;
			b = counts;
		}
		return counts;
	}
}