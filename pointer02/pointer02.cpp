#include <stdio.h>

/* void swap_ptr(char **ppa, char **ppb); */

void print_str(char **pps, int cnt);

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

	/*
	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb); // �ٲٱ� ���� ���ڿ� ���
	swap_ptr(&pa, &pb); // �Լ� ȣ��
	printf("pa -> %s, pb -> %s\n", pa, pb); // �ٲ� �Ŀ� ���ڿ� ���
	*/

	char *ptr_ary[] = { "eagle", "tiger", "lion", "squirrel" }; // �ʱ�ȭ
	int count; // �迭 ��� ���� ������ ����

	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]); // �迭 ����� �� ���
	print_str(ptr_ary, count); // �迭��� �迭 ��� ���� �ְ� ȣ��

	return 0;
}

/*
void swap_ptr(char **ppa, char **ppb) {
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}
*/

void print_str(char **pps, int cnt) { // �Ű������� 2�� ������ ���
	int i;

	for (i = 0; i < cnt; i++) { // �迭 ��� ����ŭ �ݺ�
		printf("%s\n", pps[i]); // 2�� �����͸� �迭��ó�� ���
	}
}