#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#include <math.h>
#pragma comment(lib, "CoalaMOD.lib")

void park_tree_1(int x, int y, int z) {

}

void park_tree_2(int x, int y, int z) {

}

void park_tree_3(int x, int y, int z) {

}

void park_tree_4(int x, int y, int z) {

}

void park_lake(int x, int y, int z) {
	//using polar coordinate
	const double pi = 3.14159265358979;
	const double radian = pi / 180;
	int qx, qz;
	for (int q = 0; q < 360; q++) {
		int tmp_random = create_random_number(10, 15);
		if (cos(q * radian) > sin(q * radian)) {
			int tmpz = z;
			for (int i = x; i < x + cos(q * radian) * tmp_random; i += cos(q * radian) / sin(q * radian)) {
				locateWater(createWater(), i, y, tmpz);
				++tmpz;
			}
		}
		else if (cos(q * radian) > sin(q * radian)) {
			int tmpx = x;
			for (int i = z; i < z + sin(q * radian) * tmp_random; i += sin(q * radian) / cos(q * radian)) {
				locateWater(createWater(), tmpx, y, i);
				++tmpx;
			}
		}
	}
	
}

void park(int x, int y, int z) {

}