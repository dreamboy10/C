#include <stdio.h>

/* void assign(void); // �Լ� ���� */

void assign10(void);
void assign20(void);

int a; // ���� ���� ����

int main(void) {
	/*
	int a = 0; 
	// ���� ���� ����� �ʱ�ȭ, auto�� ���� ����

	assign(); // �Լ� ȣ��
	printf("main �Լ� a : %d\n", a);
	*/

	/*
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{
		int temp; // ��� ����

		temp = a;
		a = b; // a�� b�� 5�࿡ ����� ����
		b = temp;
	} // ��� ��

	printf("��ȯ �� a�� b�� �� : %d,%d\n", a, b);
	*/

	printf("�Լ� ȣ�� �� a�� : %d\n", a); // ���� ���� a ���

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a�� : %d\n", a); // ���� ���� a ���

	return 0;
}

/*
void assign(void) {
	int a; // main �Լ��� �ִ� ������ ���� �̸��� ���� ����

	a = 10; // assign �Լ� �ȿ� ����� a�� ����
	printf("assign �Լ� a : %d\n", a); // assign �Լ��� ����� a�� ���
}
*/

void assign10(void) {
	a = 10; // ���� ���� a�� 10 ����
}

void assign20(void) {
	int a; // ���� ������ ���� �̸��� ���� ���� ����

	a = 20; // ���� ���� a�� 20 ����
}