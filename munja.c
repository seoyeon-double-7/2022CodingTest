#include<stdio.h>
#include<string.h>

void main(void) {
	char s1[7][10] = { "�ѱ�", "�̱�", "�Ϻ�", "����", "����", "ȣ��", "����"};
	char s2[] = {"����"};

	for (int i = 0; i < 7; i++) {
		//�迭�� �迭�� ���Ѵ�.
		if (strcmp(s2, s1[i]) == 0) {
			printf("������ %d��° �ֽ��ϴ�.\n", i+1);
			//break;
		}
	}
	return 0;
}

