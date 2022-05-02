#include <stdio.h>

/* void assign(void); // 함수 선언 */

void assign10(void);
void assign20(void);

int a; // 전역 변수 선언

int main(void) {
	/*
	int a = 0; 
	// 지역 변수 선언과 초기화, auto는 생략 가능

	assign(); // 함수 호출
	printf("main 함수 a : %d\n", a);
	*/

	/*
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp; // 블록 시작

		temp = a;
		a = b; // a와 b는 5행에 선언된 변수
		b = temp;
	} // 블록 끝

	printf("교환 후 a와 b의 값 : %d,%d\n", a, b);
	*/

	printf("함수 호출 전 a값 : %d\n", a); // 전역 변수 a 출력

	assign10();
	assign20();

	printf("함수 호출 후 a값 : %d\n", a); // 전역 변수 a 출력

	return 0;
}

/*
void assign(void) {
	int a; // main 함수에 있는 변수와 같은 이름의 지역 변수

	a = 10; // assign 함수 안에 선언된 a에 대입
	printf("assign 함수 a : %d\n", a); // assign 함수에 선언된 a값 출력
}
*/

void assign10(void) {
	a = 10; // 전역 변수 a에 10 대입
}

void assign20(void) {
	int a; // 전역 변수와 같은 이름의 지역 변수 선언

	a = 20; // 지역 변수 a에 20 대입
}