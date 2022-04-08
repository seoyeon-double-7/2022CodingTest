#include<stdio.h>

int main(void) {
	char s1[20] = { "coding test" };
	int i, j=0;
	
	for (i = 0; s1[i] != '\0'; i++){}

	printf("%d\n", i);

	while (1) {
		if (s1[j] == '\0')
			break;
		else 
			j++;
	}
	printf("%d", j);
	return 0;
}