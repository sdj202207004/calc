#include "div.h"

namespace myMath{
	int div(int x, int y) {
		int quot = 0;
		int sign = 0;
		if (!y) {
			//0으로 못 나눈다. 오류로 666 반환
			return 666;
		}
		if (!x) {
			//피제수가 0이면 항상 0
			return 0;
		}

		//피제수 / 제수 성질
		//둘 중 하나 만 음수면 몫도 음수
		if ((x < 0) ^ (y < 0)) {
			sign = -1;
		}
		else {
			sign = 1;
		}

		//몫 판별을 위해 피제수, 제수 절대값 변환
		if (x < 0) {
			x = -x;
		}
		if (y < 0) {
			y = -y;
		}

		//몫 구하기
		while (x >= y) {
			x -= y;
			quot++;
		}

		//몫 부호 확인
		return quot * sign;
	}
}