#include<stdio.h>
#include<time.h>

int main() {
	int arr[10];
	int min_num = 100;
	int i, min_loc=0;
	//srand(time(NULL));

	for (i = 0; i < sizeof(arr) / sizeof(int); i++) {
		arr[i] = rand() % 10 + 1;
		printf("%d\t", arr[i]);
		if (arr[i] < min_num) {
			min_num = arr[i];
			min_loc = i;
		}
	}
		printf("\n");
	
	printf("최소값 : %d\n최소값 위치 : %d\n", min_num, min_loc);
	
	return 0;
}