#include<stdio.h>

void swap(int *x, int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y= temp;
}

int main(void) {
	int a = 5, b = 8;

	int* p1 = &a;
	int* p2 = &b;
	printf("�Լ� ȣ�� ��\n");
	printf("a : %d, b : %d\n", *p1, *p2);

	swap(p1, p2);
	printf("�Լ� ȣ�� ��\n");
	printf("a : %d, b : %d\n", *p1, *p2);


	return 0;
}