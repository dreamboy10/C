#include <stdio.h>

/* void add_ten(int a); // �Լ� ���� */

void add_ten(int *p); // �Ű������� ������ ����

int main(void) {
	/*
	int a = 10;

	add_ten(a); // a���� �����Ͽ� ����
	printf("a : %d\n", a);
	*/

	int a = 10;

	add_ten(&a); // a�� �ּҸ� �μ��� �ش�.
	printf("a : %d\n", a); // ������ a�� ���

	return 0;
}

/*
void add_ten(int a) { // 7���� a�� �ٸ� �������� ���� ���� �Ҵ�
	a = a + 10; // 15���� �Ű����� a�� 10�� ���Ѵ�.
}
*/

void add_ten(int *p) {
	*p = *p + 10; // ������ p�� ����Ű�� ������ �� 10 ����
}