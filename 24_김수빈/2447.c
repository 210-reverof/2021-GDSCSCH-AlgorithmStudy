// �ۼ���: 2021�� 10�� 31��
// �ۼ���: �����
// ���α׷���: ������
#include <stdio.h>

void print_star(int a, int b, int c) {
	if ((a % 3 == 1) && (b % 3 == 1))
		printf(" ");
	else if (c / 3 == 1)
		printf("*");
	else
		print_star(a / 3, b / 3, c / 3);
}

int main() {
	int num;
	
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++)
			print_star(i, j, num);
		printf("\n");
	}
	return 0;
}