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
		//打印一行数据
		int j;
		for (j = 0; j < col; j++) {
			printf(" %c ", board[i][j]);
			if (j < col - 1) {
				printf("|");
			}
		}
		printf("\n");
		//打印分割线
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
	printf("玩家下棋\n");
	printf("请输入坐标:\n");
	//横坐标
	int x = 0;
	//纵坐标
	int y = 0;
	while (1) {
		printf("请输入要下的坐标：\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ') {
				board[x - 1][y - 1] = '*';
				break;
			}
			else {
				printf("该坐标已被占用，请重新输入：\n");
			}
		}
		else {
			printf("没有该坐标，请重新输入：\n");
		}
	}
}