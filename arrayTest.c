#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main() {
	int n, i;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("숫자입력 : ");
	scanf_s("%d", &n);

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] == n)
			break;
	}

	if (n < 10)
		printf("%d는 %d번째 요소입니다.", n, i);
	else 
		print("결과를 찾을 수 없습니다.");

	return 0;
}