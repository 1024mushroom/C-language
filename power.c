#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double Pow(int n, int k) {
	if (k < 0) {
		return (1 / Pow(n, -k));
	}
	else if (k == 0) {
		return 1;
	}
	else{
		return n * Pow(n, k - 1);
	}
}
int main() {
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	double count = Pow(n, k);
	printf("%lf\n", count);
	return 0;
}