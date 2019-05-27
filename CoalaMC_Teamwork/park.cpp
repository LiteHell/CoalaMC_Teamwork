#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#include <math.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))
#pragma comment(lib, "CoalaMOD.lib")

void park_tree_1(int x, int y, int z) {
	
}

void park_tree_2(int x, int y, int z) {

}

void park_tree_3(int x, int y, int z) {
	WoodID wood = createWood(WOOD_BIRCH, STRIP_UP_DOWN); // ³ª¹«±âµÕ
	PlantID leaf = createPlant(PLANT_BIRCH_LEAVES);

	int height = create_random_number(5, 8);
	int leaveHeight = create_random_number(3, 5);
	int leaveStart = height - leaveHeight + 1;
	if (leaveStart < 2) leaveStart = 1;

	for (int i = 0; i < height; i++)
		locateWood(wood, x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 2; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(leaf, lx, y + i, lz);
	for (int i = leaveStart + leaveHeight - 2; i < leaveStart + leaveHeight; i++)
		for (int lx = x - 1; lx <= x + 1; lx++)
			for (int lz = z - 1; lz <= z + 1; lz++)
				if ((ABS(lx - x) != 1 || ABS(lz - z) != 1 || i == leaveStart + leaveHeight - 2) && (i == leaveStart + leaveHeight - 2 ? (lx != x || lz != z) : true))
					locatePlant(leaf, lx, y + i, lz);
}

void park_tree_4(int x, int y, int z) {
	WoodID wood = createWood(WOOD_OAK, STRIP_UP_DOWN); // ³ª¹«±âµÕ
	PlantID leaf = createPlant(PLANT_OAK_LEAVES);
	
	int height = create_random_number(4, 7);
	int leaveHeight = 3;
	int leaveStart = height - leaveHeight + 1;

	for (int i = 0; i < height; i++)
		locateWood(wood, x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 1; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(leaf, lx, y + i, lz);
	locatePlant(leaf, x - 1, y + leaveStart + leaveHeight - 1, z);
	locatePlant(leaf, x + 1, y + leaveStart + leaveHeight - 1, z);
	locatePlant(leaf, x, y + leaveStart + leaveHeight - 1, z - 1);
	locatePlant(leaf, x, y + leaveStart + leaveHeight - 1, z + 1);
	locatePlant(leaf, x, y + leaveStart + leaveHeight - 1, z);

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