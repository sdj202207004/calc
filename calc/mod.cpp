#include "mod.h"
#include "div.h"


int mod(int x, int y) {
	// x = y * �� + ������
	//������ = x - y * ��
	return x - y * myMath::div(x, y);
}