#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[] = {3,2,1,4};
	int i,j;
	for (i = 0; i < (sizeof(arr) / sizeof(arr[0]))-1; i++) {
		for (j = 0; j < (sizeof(arr) / sizeof(arr[0])) - i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int num = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = num;
			}
		}
	}
	for (int k = 0; k < (sizeof(arr) / sizeof(arr[0])); k++) {
		printf("%d\n", arr[k]);
	}
	return 0;
}