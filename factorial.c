#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int sum = n;
	for(; n > 1 ; ){
		sum = sum * --n ;
	}
	printf("sum=%d\n", sum);
	return 0;
} 
