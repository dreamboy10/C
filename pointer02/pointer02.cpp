#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void) {
	/*
	int a = 10; // int�� ������ ����� �ʱ�ȭ
	int *pi; // ������ ����
	int **ppi; // 2�� ������ ����

	pi = &a; // int�� ������ �ּҸ� �����Ϳ� ����
	ppi = &pi; // �������� �ּҸ� 2�� �����Ϳ� ����

	printf("----------------------------------------------------\n");
	printf("���� ������ &���� *���� **����\n");
	printf("----------------------------------------------------\n");
	printf(" a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------------------------\n");
	*/

	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb); // �ٲٱ� ���� ���ڿ� ���
	swap_ptr(&pa, &pb); // �Լ� ȣ��
	printf("pa -> %s, pb -> %s\n", pa, pb); // �ٲ� �Ŀ� ���ڿ� ���

	return 0;
}

void swap_ptr(char **ppa, char **ppb) {
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}