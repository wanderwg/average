#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int Average(int a, int b) {
	int c;
	c = a + b;
	c = (c >> 1);
	return c;
}
int main() {
	int a, b, ret;
	scanf("%d %d", &a, &b);
	ret = Average(a, b);
	printf("%d与%d的平均值为：%d\n", a, b, ret);
	system("pause");
	return 0;
}
