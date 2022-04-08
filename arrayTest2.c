#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int i, n;
	srand(time(NULL));

	n = (rand() % 10) + 1;

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] == n) 
			break;
	}
	if (n < 10) 
		printf("%d는 %d번째 요소입니다.", n, i);
	else
		printf("결과를 찾을 수 없습니다.");

	return 0;
}