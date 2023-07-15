#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int denominator=1;//·ÖÄ¸
	double numerator=1;//·Ö×Ó
	double sum = 0.0;
	int flag = 1;
	for (denominator = 1; denominator <= 100; denominator++) {
		sum += flag * (numerator / denominator);
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}