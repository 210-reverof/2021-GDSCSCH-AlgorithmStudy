N, M, R = map(int, input().split())
# N�� ��ŭ �迭�� ������ �Ѵ�.
arr = [list(map(int, input().split())) for _ in range(N)]
# ó�� ���� temp�� �־��ְ� ����ִ� ���� �ϳ��ϳ� ������ �ȴ�
# ���� �κ��� ���� min(N, M) mod 2 = 0�� �ִµ� ���� 3X4 ������ �� �߰� �κ��� �ذ��ϱ� �����̴�.