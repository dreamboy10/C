#include <stdio.h>
#include <time.h> // time�� localtime�� ���� ��Ŭ���

int main(void) {
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

	return 0;
}