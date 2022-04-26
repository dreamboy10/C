#include <stdio.h>
/* #include <string.h> // strcpy �Լ��� ����ϱ� ���� ��Ŭ����� */

char *my_strcpy(char *pd, char *ps); // �Լ� ����

int main(void) {
	/*
	char str1[80] = "strawberry"; // char �迭�� ���ڿ� �ʱ�ȭ
	char str2[80] = "apple"; // char �迭�� ���ڿ� �ʱ�ȭ
	char *ps1 = "banana"; // �����ͷ� ���ڿ� ��� ����
	char *ps2 = str2; // �����ͷ� �迭 ����

	printf("���� ���ڿ� : %s\n", str1);
	strcpy(str1, str2); // �ٸ� char �迭�� ���ڿ� ����
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps1); // ���ڿ� ����� ������ ������ ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, ps2); // �迭�� ������ ������ ���
	printf("�ٲ� ���ڿ� : %s\n", str1);

	strcpy(str1, "banana"); // ���ڿ� ��� ���
	printf("�ٲ� ���ڿ� : %s\n", str1);
	*/

	char str[80] = "strawberry";

	printf("�ٲٱ� �� ���ڿ� : %s\n", str);
	my_strcpy(str, "apple"); // ���ڿ� "apple" ����
	printf("�ٲ� �� ���ڿ� : %s\n", str);
	printf("�ٸ� ���ڿ� ���� : %s\n", my_strcpy(str, "kiwi"));
	// ��ȯ������ ���

	return 0;
}

char *my_strcpy(char *pd, char *ps) { 
	// ������� ��(pd)�� ������ ��(ps)�� ������

	char *po = pd; // pd���� ���߿� ��ȯ�ϱ� ���� ����

	while (*ps != '\0') {
		// ps�� ����Ű�� ���ڰ� �ι��ڰ� �ƴ� ����

		*pd = *ps; // ps�� ����Ű�� ���ڸ� pd�� ����Ű�� ��ġ�� ����
		pd++; // ������� ���� ��ġ�� ������ ����
		ps++; // ������ ���� ������ ��ġ�� ������ ����
	}
	*pd = '\0'; // ���簡 ��� ���� �� ������� ���� �ι��ڷ� ������

	return po; // ���簡 ���� ���� ������ ���� �ּ� ��ȯ

}