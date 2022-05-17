#include <stdio.h>

void swap_ptr(char **ppa, char **ppb);

int main(void) {
	/*
	int a = 10; // int형 변수의 선언과 초기화
	int *pi; // 포인터 선언
	int **ppi; // 2중 포인터 선언

	pi = &a; // int형 변수의 주소를 포인터에 저장
	ppi = &pi; // 포인터의 주소를 2중 포인터에 저장

	printf("----------------------------------------------------\n");
	printf("변수 변수값 &연산 *연산 **연산\n");
	printf("----------------------------------------------------\n");
	printf(" a%10d%10u\n", a, &a);
	printf(" pi%10u%10u%10d\n", pi, &pi, *pi);
	printf("ppi%10u%10u%10u%10u\n", ppi, &ppi, *ppi, **ppi);
	printf("----------------------------------------------------\n");
	*/

	char *pa = "success";
	char *pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb); // 바꾸기 전에 문자열 출력
	swap_ptr(&pa, &pb); // 함수 호출
	printf("pa -> %s, pb -> %s\n", pa, pb); // 바꾼 후에 문자열 출력

	return 0;
}

void swap_ptr(char **ppa, char **ppb) {
	char *pt;

	pt = *ppa;
	*ppa = *ppb;
	*ppb = pt;
}