#include <stdio.h>

int main(void) {
	char ch = '9';
	int number = ch - 48;
	int n = 9;

	printf("문자 : %c, 수 : %d, 수 : %d\n",ch, number, n);
	// 문자 : 9, 수 : 9, 수 : 9

	ch += 1;
	number += 1;
	n += 1;

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);
	// 문자 : :, 수 : 10, 수 : 10

	ch += '1';
	number += '1';
	n += '1';

	printf("문자 : %c, 수 : %d, 수 : %d\n", ch, number, n);
	// 문자 : k, 수 : 59, 수 : 59
	// 1은 아스키코드로 49이기 때문에 49가 더해짐


	return 0;
}