#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void titleDraw();

int main() {
	int arr[10];
	int sum = 0;
	double avg;

	//1~100���� ���� arr�� ����
	for (int i = 0; i < 10; i++)
		arr[i] = rand() % 100+1;

	//�հ� ���ϱ�
	for (int i = 0; i < 10; i++)
		sum += arr[i];

	//��� ���ϱ�
	avg = (double)sum / 10;
	
	system("cls");
	//���
	printf("�� : %d\n", sum);
	printf("��� : %.2f", avg);

	return 0;
}

void titleDraw() {
	printf("");
}