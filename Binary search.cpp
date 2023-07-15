#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int left = 0;
	int a = sizeof(arr) / sizeof(arr[0]);
	int right = a-1;
	int num = 12;
	while (left <= right) {
		int average = (left+right)/2;
		if (num < arr[average]) {
			right = average - 1;
		}
		else if (num > arr[average]) {
			left = average + 1;
		}
		else {
			printf("%d\n", average);
			break;
		}
	}
	if (left > right) {
		printf("ц╩спур╣╫\n");
	}
	return 0;
}