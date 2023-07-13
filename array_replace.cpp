#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main() {
	char arr1[] = "Welcome China!!!";
	char arr2[] = "####### ########";
	
	int left = 0;
	int right = strlen(arr1)-1;

	for (; left <= right; left++, right--) {
		printf("%s\n", arr2);
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		
		Sleep(1000);//让代码运行速度慢一秒
		system("cls");//执行系统命令，清空屏幕
	}
	printf("%s\n", arr2);
	return 0;
}