#include <stdio.h>
int summation(int a, int b) {
	return  a+b;
}
int main() {
	int a, b, sum;
	scanf("%d%d", &a, &b);
	sum = summation(a,b);
	printf("sum = %d", sum);
	return 0;
}
