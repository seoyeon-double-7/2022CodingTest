#include <stdio.h>

int main(void) {
	char ch = '9';
	int number = ch - 48;
	int n = 9;

	printf("���� : %c, �� : %d, �� : %d\n",ch, number, n);
	// ���� : 9, �� : 9, �� : 9

	ch += 1;
	number += 1;
	n += 1;

	printf("���� : %c, �� : %d, �� : %d\n", ch, number, n);
	// ���� : :, �� : 10, �� : 10

	ch += '1';
	number += '1';
	n += '1';

	printf("���� : %c, �� : %d, �� : %d\n", ch, number, n);
	// ���� : k, �� : 59, �� : 59
	// 1�� �ƽ�Ű�ڵ�� 49�̱� ������ 49�� ������


	return 0;
}