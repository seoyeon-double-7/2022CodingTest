#include<stdio.h>

int main(void) {
	int m=100, n=200, dummy;
	printf("%d, %d\n", m, n);

	//���� m�� n�� ������� �ʰ� �� ������ ���� ��ȯ
	int* p = &m;
	dummy = *p;	// *p == m
	*p = n;
	p = &n;
	*p = dummy;
	printf("%d, %d\n", m, n);


	return 0;
}