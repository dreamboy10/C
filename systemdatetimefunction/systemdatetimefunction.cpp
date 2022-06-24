#include <stdio.h>
#include <time.h> // time과 localtime을 위한 인클루드

int main(void) {
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

	return 0;
}