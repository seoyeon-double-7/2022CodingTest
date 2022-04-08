#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void titleDraw();

int main() {
	int arr[10];
	int sum = 0;
	double avg;

	//1~100까지 정수 arr에 저장
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 100+1;

	//합계 구하기
	for (int i = 0; i < 10; i++)
		sum += arr[i];

	//평균 구하기
	avg = (double)sum / 10;
	
	system("cls");
	//출력
	printf("합 : %d\n", sum);
	printf("평균 : %.2f", avg);

	return 0;
}

void titleDraw() {
	printf("");
}