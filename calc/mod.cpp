#include "mod.h"
#include "div.h"


int mod(int x, int y) {
	// x = y * ¸ò + ³ª¸ÓÁö
	//³ª¸ÓÁö = x - y * ¸ò
	return x - y * myMath::div(x, y);
}