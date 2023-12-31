#include"game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	int i = 0;
	for (i = 0; i < rows; i++) {
		int j = 0;
		for (j = 0; j < cols; j++) {
			board[i][j] = set;
		}
	}
}
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	int i = 0;
	//打印列号
	printf(" ");
	for (i = 1; i <= col; i++) {
		printf(" %d", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		int j = 0;
		//打印行号
		printf("%d ", i);
		for (j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;
	while (count) {
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] +
		mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] +
		mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col-EASY_COUNT) {
		printf("请输入坐标:\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			//坐标合法
			//1.踩雷
			if (mine[x][y] == '1') {
				printf("很遗憾，你被雷炸死了\n");
				DisplayBoard(mine, row, col);
				break;
			}
			//2.没踩雷
			else {
				int count = get_mine_count(mine, x, y);//获取周围雷的数量
				show[x][y] = count + '0';
				DisplayBoard(show,row,col);
				win++;
			}
		}
		else {
			printf("输入坐标非法，请重新输入:");
		}
	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜你！排雷成功\n");
		DisplayBoard(mine, row, col);
	}
}