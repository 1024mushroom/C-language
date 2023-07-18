
#include"game.h"
//游戏算法的实现
void game() {
	//数组存放棋盘信息
	char board[ROW][COL] = { 0 };//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	while (1) {
	//玩家下棋
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
		printf("请输入选项：\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main() {
	menu();
	return 0;
}