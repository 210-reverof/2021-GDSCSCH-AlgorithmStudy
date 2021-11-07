// �ۼ���: 2021�� 11�� 7��
// �ۼ���: �����
// ���α׷���: ��ǥ �����ϱ�
#include <stdio.h>

typedef struct {
	int x, y;
} Coordinate;

void coor_sort(Coordinate* c, int n) {
	Coordinate temp;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			if (((c[i].x == c[j].x) && (c[i].y > c[j].y)) || (c[i].x > c[j].x)) {
				temp = c[i];
				c[i] = c[j];
				c[j] = temp;
			}
		}
	}
}

int main() {
	int number;
	Coordinate* coor;

	scanf_s("%d", &number);
	coor = (Coordinate*)malloc(sizeof(Coordinate) * number);
	for (int i = 0; i < number; i++)
		scanf_s("%d %d", &coor[i].x, &coor[i].y);

	coor_sort(coor, number);
	for (int i = 0; i < number; i++)
		printf("\n%d %d", coor[i].x, coor[i].y);
	free(coor);
	return 0;
}