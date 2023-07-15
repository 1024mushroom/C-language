#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[] = { -1,2,8,3,4,-5,9 };
	int max_num = arr[0];
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++) {
		if (arr[i] > max_num) {
			max_num = arr[i];
		}
	}
	printf("%d\n", max_num);
	return 0;
}