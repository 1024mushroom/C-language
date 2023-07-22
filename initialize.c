#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		arr[i] = 0;
	}
}
void Print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d\n", arr[i]);
	}
}
int main() {
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr, sz);
	Print(arr, sz);
	return 0;
}