#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	/*
	char *day[7] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	time_t res; // time�� ��ȯ�ϴ� �ð� ����
	struct tm *pt; // localtime�� ��ȯ�ϴ� �ּ� ����

	time(&res); // �� ���
	pt = localtime(&res); // �ʷ� ��¥�� ����, �ð� ���

	printf("%d��", pt -> tm_year + 1900); // tm�� �� ����� ��¥�� �ð� ���
	printf("%d��", pt -> tm_mon + 1);
	printf("%d��", pt -> tm_mday);
	printf("%s����", day[pt -> tm_wday]);
	printf("%d:%d:%d\n", pt -> tm_hour, pt -> tm_min, pt -> tm_sec);
	*/

	int lotto[6]; // 6���� ������ ������ �迭
	int num, i, j;

	srand((unsigned int)time(NULL)); // time�� ��ȯ���� srand�� seed ������ ���
	i = 0;
	
	while (i < 6) { // 6���� ������ ���� ������ �ݺ�
		num = (rand() % 45) + 1; // rand�� ������ 1~45������ ���� ����
		for (j = 0; j < i; j++) { // �迭���� ���� ���� ���������� �˻�
			if (num == lotto[j]) { // �ߺ��Ǵ� ���� ������ �ݺ� ����
				break;
			}
		}

		if (i == j) { // ���� ���� ���� �� ���ǽ��� ��
			lotto[i] = num; // ���ο� ������ lotto �迭�� ����
			i++; // �ζ� ��ȣ �� ����
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%5d", lotto[i]); // lotto �迭�� �� ���
	}

	return 0;
}