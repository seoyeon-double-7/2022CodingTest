#include<stdio.h>
#include<time.h>

int main() {
	int arr[10];
	int max_num = 0;
	int max_loc=0;
	//srand(time(NULL));

	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		arr[i] = rand() % 10 + 1;
		printf("%d\t", arr[i]);
		if (arr[i] > max_num) {
			max_num = arr[i];
			max_loc = i;
		}
	}
		printf("\n");
	
	printf("�ִ밪 : %d\n�ִ밪 ��ġ : %d\n", max_num, max_loc);
	
	return 0;
}