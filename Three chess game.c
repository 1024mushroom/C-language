
#include"game.h"
//��Ϸ�㷨��ʵ��
void game() {
	//������������Ϣ
	char board[ROW][COL] = { 0 };//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	while (1) {
	//�������
	PlayerMove(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	}
	
}
void menu() {
	int input;
	printf("***********Three chess game*************\n");
	printf("***********1. play  0. exit*************\n");
	printf("****************************************\n");
	do {
		printf("������ѡ�\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main() {
	menu();
	return 0;
}