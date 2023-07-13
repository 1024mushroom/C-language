#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int binsearch(int j, int arr[], int n) {
	int left = 0;
	int right = j-1;
	while (left <= right) {
		int average = (left + right) / 2;
		if (arr[average] > n) {
			right = average--;
		}
		else if (arr[average] < n) {
			left = average + 1;
		}
		else {
			return average;
		}
	}
	if (left > right) {
		return 0;
	}
	return 0;
}
int main() {
	int arr[] = {1,2,3,4,5,6};
	int z ;
	scanf("%d", &z);
	int j = sizeof(arr) / sizeof(arr[0]);
	int k = binsearch(j,arr, z);
	printf("%d\n", k);
	return 0;
}