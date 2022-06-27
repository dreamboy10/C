#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	/*
	char *day[7] = { "일", "월", "화", "수", "목", "금", "토" };
	time_t res; // time이 반환하는 시간 저장
	struct tm *pt; // localtime이 반환하는 주소 저장

	time(&res); // 초 계산
	pt = localtime(&res); // 초로 날짜와 요일, 시간 계산

	printf("%d년", pt -> tm_year + 1900); // tm의 각 멤버로 날짜와 시간 출력
	printf("%d월", pt -> tm_mon + 1);
	printf("%d일", pt -> tm_mday);
	printf("%s요일", day[pt -> tm_wday]);
	printf("%d:%d:%d\n", pt -> tm_hour, pt -> tm_min, pt -> tm_sec);
	*/

	int lotto[6]; // 6개의 난수를 저장할 배열
	int num, i, j;

	srand((unsigned int)time(NULL)); // time의 반환값을 srand의 seed 값으로 사용
	i = 0;
	
	while (i < 6) { // 6개의 난수를 구할 때까지 반복
		num = (rand() % 45) + 1; // rand의 난수를 1~45까지의 수로 제한
		for (j = 0; j < i; j++) { // 배열에서 현재 구한 난수까지만 검사
			if (num == lotto[j]) { // 중복되는 수가 있으면 반복 종료
				break;
			}
		}

		if (i == j) { // 같은 수가 없을 때 조건식은 참
			lotto[i] = num; // 새로운 난수를 lotto 배열에 저장
			i++; // 로또 번호 수 증가
		}
	}

	for (i = 0; i < 6; i++) {
		printf("%5d", lotto[i]); // lotto 배열의 값 출력
	}

	return 0;
}