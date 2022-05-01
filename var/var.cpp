#include <stdio.h>

/* void assign(void); // 함수 선언 */

int main(void) {
	/*
	int a = 0; 
	// 지역 변수 선언과 초기화, auto는 생략 가능

	assign(); // 함수 호출
	printf("main 함수 a : %d\n", a);
	*/

	int a = 10, b = 20;

	printf("교환 전 a와 b의 값 : %d, %d\n", a, b);
	{
		int temp; // 블록 시작

		temp = a;
		a = b; // a와 b는 5행에 선언된 변수
		b = temp;
	} // 블록 끝

	printf("교환 후 a와 b의 값 : %d,%d\n", a, b);

	return 0;
}

/*
void assign(void) {
	int a; // main 함수에 있는 변수와 같은 이름의 지역 변수

	a = 10; // assign 함수 안에 선언된 a에 대입
	printf("assign 함수 a : %d\n", a); // assign 함수에 선언된 a값 출력
}
*/