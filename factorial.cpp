#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	
	int num = 0;
	for (int n = 10; n > 0; n --) {
		int sum = n;
		for ( int i = n; i > 1; ) {
			sum = sum * --i;
		}
		num += sum;
		
		
	}

	printf(" sum=%d \n", num);
	return 0;
}
