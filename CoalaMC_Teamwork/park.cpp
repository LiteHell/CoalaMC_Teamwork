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
	int qx, qz;
	for (int q = 0; q < 360; q++) {
		int tmp_rand = create_random_number(10, 15);
		for (int i = x; i < x + cos(q*(pi/180)) * tmp_rand; i++) {
			for (int j = z; j < z + sin(q*(pi/180)) * tmp_rand; j++) {
				locateWater(createWater(), i, y, j);
			}
		}
	}
	
}

void park(int x, int y, int z) {

}