#include <CoalaMOD.h>
#include "utils.h"
#include "buildings.h"
#include "LHM_constants.h"
#define ABS(x) ((x) < 0 ? -(x) : (x))
#pragma comment(lib, "CoalaMOD.lib")

//빌딩 블럭은 최소 5개 이상 만들어서 사용한다.

void road_tree(int x, int y, int z) {
	int wood_random = create_random_number(0, 5);
	int plant_random = create_random_number(6, 11);
	int height = create_random_number(7, 9);
	int leaveHeight = create_random_number(3, 5);
	int leaveStart = height - leaveHeight + 1;
	if (leaveStart < 2) leaveStart = 1;

	for (int i = 0; i < height; i++)
		locateWood(wood[wood_random], x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 2; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(plant[plant_random], lx, y + i, lz);
	for (int i = leaveStart + leaveHeight - 2; i < leaveStart + leaveHeight; i++)
		for (int lx = x - 1; lx <= x + 1; lx++)
			for (int lz = z - 1; lz <= z + 1; lz++)
				if ((ABS(lx - x) != 1 || ABS(lz - z) != 1 || i == leaveStart + leaveHeight - 2) && (i == leaveStart + leaveHeight - 2 ? (lx != x || lz != z) : true))
					locatePlant(plant[plant_random], lx, y + i, lz);

}

void locate_fence(int x, int y, int z) {
	//울타리를 만드는 함수
	for (int i = x - 1; i < x + 61; i++) {
		locateFence(fence[0], i, y + 1, z - 1);
		locateFence(fence[0], i, y + 1, z + 60);
	}
	for (int i = z - 1; i < z + 61; i++) {
		locateFence(fence[0], x - 1, y + 1, i);
		locateFence(fence[0], x + 60, y + 1, i);
	}
}

void locate_tree_road(int x, int y, int z) {
	//나무를 만드는 함수
	for (int i = x - 1; i < x + 61; i+=7) {
		road_tree(i, y + 1, z - 1);
		road_tree(i, y + 1, z + 60);
	}
	for (int i = z - 1; i < z + 61; i+=7) {
		road_tree(x - 1, y + 1, i);
		road_tree(x + 60, y + 1, i);
	}
}

void building_block_1(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	LHM_building_1(x, y, z, 1);
}

void building_block_2(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	LHM_building_2(x, y, z, 1);
}

void building_block_3(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	createBuilding_MARINA(x, y, z);
}

void building_block_4(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	createBuilding_HAPPY(x, y, z);
}

void building_block_5(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	createBuilding_JGH(x, y, z);
}
