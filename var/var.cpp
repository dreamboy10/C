#include <stdio.h>

/* void assign(void); // �Լ� ���� */

int main(void) {
	/*
	int a = 0; 
	// ���� ���� ����� �ʱ�ȭ, auto�� ���� ����

	assign(); // �Լ� ȣ��
	printf("main �Լ� a : %d\n", a);
	*/

	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
	{
		int temp; // ��� ����

		temp = a;
		a = b; // a�� b�� 5�࿡ ����� ����
		b = temp;
	} // ��� ��

	printf("��ȯ �� a�� b�� �� : %d,%d\n", a, b);

	return 0;
}

/*
void assign(void) {
	int a; // main �Լ��� �ִ� ������ ���� �̸��� ���� ����

	a = 10; // assign �Լ� �ȿ� ����� a�� ����
	printf("assign �Լ� a : %d\n", a); // assign �Լ��� ����� a�� ���
}
*/