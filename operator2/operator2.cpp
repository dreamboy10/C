#include <stdio.h>

int main(void) {
	int a = 20, b = 3;
	double res;

	res = ((double)a / (double)b); // a와 b의 값이 실수형으로 변환
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 %.1lf\n", res);

	a = (int)res; // res의 값에서 정수 부분만 추림
	printf("(int) %.1lf의 결과 %d\n", res, a);

	int c = 10;
	double d = 3.4;

	printf("int형 변수의 크기 : %d\n",sizeof(c));
	printf("double형 변수의 크기 : %d\n", sizeof(d));
	printf("정수형 상수의 크기: %d\n", sizeof(10));
	printf("수식의 결과값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	int e = 10, f = 20;
	int res2 = 2;

	e += 20; // e와 20을 더한 결과를 다시 e에 저장
	res2 *= f + 10; // f에 10을 더한 결과값에 res를 곱하고 다시 res2에 저장

	printf("e = %d, f = %d\n", e, f);
	printf("res = %d\n", res2);
	
	int g = 10, h = 20;
	int res3;

	res3 = (++g, ++h); // 차례로 연산이 수행되며 결과적으로 res3에 저장되는 값은 증가된 h의 값이다.

	printf("g : %d, h: %d\n", g, h);
	printf("res3 : %d\n", res3);

	int i = 10, j = 20, res4;

	res4 = (i > j) ? i : j; // i와 j 중에 큰 값이 res4에 저장
	printf("큰 값 : %d\n", res4);

	return 0;
}