#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��ŵ������
void move(int n, char sourceTower, char destTower) {
	printf("����%d���ڴ�%c�Ƶ�%c\n", n, sourceTower, destTower);
}
void Hanoi(int n, char a, char b, char c) {
	if (n == 1) {
		move(n, a, c);
		return;
	}
	else {
		Hanoi(n - 1, a, c, b);
		move(n, a, c);
		Hanoi(n - 1, b, a, c);
	}
}
int main() {
	int num = 0;
	//�������������
	scanf("%d", &num);
	Hanoi(num,'A','B','C');

	return 0;
}