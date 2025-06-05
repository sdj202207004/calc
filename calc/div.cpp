#include "div.h"

namespace myMath{
	int div(int x, int y) {
		int quot = 0;
		int sign = 0;
		if (!y) {
			//0���� �� ������. ������ 666 ��ȯ
			return 666;
		}
		if (!x) {
			//�������� 0�̸� �׻� 0
			return 0;
		}

		//������ / ���� ����
		//�� �� �ϳ� �� ������ �� ����
		if ((x < 0) ^ (y < 0)) {
			sign = -1;
		}
		else {
			sign = 1;
		}

		//�� �Ǻ��� ���� ������, ���� ���밪 ��ȯ
		if (x < 0) {
			x = -x;
		}
		if (y < 0) {
			y = -y;
		}

		//�� ���ϱ�
		while (x >= y) {
			x -= y;
			quot++;
		}

		//�� ��ȣ Ȯ��
		return quot * sign;
	}
}