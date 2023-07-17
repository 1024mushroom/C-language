#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* ch) {
	if (*ch != '\0') {
		return 1 + my_strlen(ch + 1);
	}
	else {
		return 0;
	}
	
}
int main() {
	char arr[] = "asdf";
	int num = my_strlen(arr);
	printf("%d\n", num);
	return 0;
}