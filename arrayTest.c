#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main() {
	int n, i;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("�����Է� : ");
	scanf_s("%d", &n);

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] == n)
			break;
	}

	if (n < 10)
		printf("%d�� %d��° ����Դϴ�.", n, i);
	else 
		print("����� ã�� �� �����ϴ�.");

	return 0;
}