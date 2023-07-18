#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col) {
	int i = 0;
	for (i; i < row; i++) {
		//��ӡһ������
		int j;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		//��ӡ�ָ���
		if (i < row - 1) {
			for (j = 0; j < col; j++) {
				printf("---");
				if (j < col - 1) {
					printf("|");
				}
			}
			printf("\n");
		}		
	}
}
void PlayerMove(char board[ROW][COL], int row, int col) {
	printf("�������\n");
	printf("����������:\n");
	//������
	int x = 0;
	//������
	int y = 0;
	while (1) {
		printf("������Ҫ�µ����꣺\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("�������ѱ�ռ�ã����������룺\n");
			}
		}
		else {
			printf("û�и����꣬���������룺\n");
		}
	}
}