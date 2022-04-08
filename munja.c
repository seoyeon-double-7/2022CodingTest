#include<stdio.h>
#include<string.h>

void main(void) {
	char s1[7][10] = { "한국", "미국", "일본", "영국", "독일", "호주", "독일"};
	char s2[] = {"독일"};

	for (int i = 0; i < 7; i++) {
		//배열과 배열을 비교한다.
		if (strcmp(s2, s1[i]) == 0) {
			printf("독일은 %d번째 있습니다.\n", i+1);
			//break;
		}
	}
	return 0;
}

