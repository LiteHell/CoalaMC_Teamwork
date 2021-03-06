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

void locate_light_road(int x, int y, int z) {
	for (int i = x + 2; i < x + 56; i += 7) {
		locateBlock(block[31], i, y, z - 1);
		locateBlock(block[31], i, y, z + 60);
		locateBlock(block[31], i + 1, y, z - 1);
		locateBlock(block[31], i + 1, y, z + 60);
	}
	for (int i = z + 2; i < z + 56; i += 7) {
		locateBlock(block[31], x - 1, y, i);
		locateBlock(block[31], x + 60, y, i);
		locateBlock(block[31], x - 1, y, i + 1);
		locateBlock(block[31], x + 60, y, i + 1);
	}
}

void create_ground(int x, int y, int z) {
	for (int i = x; i < x + 60; i++) {
		for (int j = z; j < z + 60; j++) {
			locateBlock(block[8], i, y, j);
		}
	}
}

void building_block_1(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	create_ground(x, y, z);
	locate_light_road(x, y, z);

	LHM_building_1(x, y, z, 1);
	locateBlock(block[0], x - 1, y + 1, z + 7);
	locateBlock(block[0], x - 1, y + 1, z + 8);

	createBuilding_ConcreteModern(x + 39, y + 1, z + 1);

	createBuilding_HAPPY(x + 47, y, z + 31);
	locateBlock(block[0], x + 60, y + 1, z + 35);
	locateBlock(block[0], x + 60, y + 1, z + 36);

	createBuilding_JGH(x + 1, y + 1, z + 38);
	locateBlock(block[0], x + 11, y + 1, z + 60);

	LHM_building_2(x + 25, y, z + 45, 2);
	locateBlock(block[0], x + 31, y + 1, z + 60);
	locateBlock(block[0], x + 32, y + 1, z + 60);

	createBuilding_MARINA(x - 3, y, z + 19);

	LHM_building_2(x + 45, y, z + 16, 3);
	locateBlock(block[0], x + 60, y + 1, z + 22);
	locateBlock(block[0], x + 60, y + 1, z + 23);
}

void building_block_2(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	create_ground(x, y, z);
	locate_light_road(x, y, z);

	createBuilding_StoneShrine(x - 4, y + 1, z - 9);
	createBuilding_ConcreteModern(x + 39, y + 1, z + 25);
	createBuilding_ConcreteModern(x + 39, y + 1, z + 37);
	createBuilding_ConcreteModern(x + 39, y + 1, z + 49);
	LHM_building_2(x + 23, y, z + 44, 2);
	createBuilding_JGH(x + 38, y + 1, z + 1);
	createBuilding_JGH_SECOND(x + 1, y + 1, z + 37);

	locateBlock(block[0], x + 60, y + 1, z + 11);
	locateBlock(block[0], x + 60, y + 2, z + 11);
	locateBlock(block[0], x + 11, y + 1, z + 60);
	locateBlock(block[0], x + 11, y + 2, z + 60);
	locateBlock(block[0], x + 29, y + 1, z + 60);
	locateBlock(block[0], x + 29, y + 2, z + 60);
	locateBlock(block[0], x + 30, y + 1, z + 60);
	locateBlock(block[0], x + 30, y + 2, z + 60);
}

void building_block_3(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	create_ground(x, y, z);
	locate_light_road(x, y, z);
	
	LHM_building_1(x, y, z, 1);
	locateBlock(block[0], x - 1, y + 1, z + 7);
	locateBlock(block[0], x - 1, y + 1, z + 8);

	LHM_building_2(x + 28, y, z, 4); 
	locateBlock(block[0], x + 35, y + 1, z - 1);
	locateBlock(block[0], x + 36, y + 1, z - 1);

	LHM_building_2(x + 45, y, z, 3);
	locateBlock(block[0], x + 60, y + 1, z + 7);

	createBuilding_ConcreteModern(x + 39, y + 1, z + 18);

	createBuilding_StoneShrine(x + 26, y + 1, z + 21);

	createBuilding_JGH(x + 1, y + 1, z + 18);
	locateBlock(block[0], x - 1, y + 1, z + 28);

	createBuilding_MARINA(x - 2, y, z + 43);
}

void building_block_4(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	create_ground(x, y, z);
	locate_light_road(x, y, z);

	createBuilding_JGH(x + 5, y + 1, z + 5);
	locateBlock(block[0], x - 1, y + 1, z + 7);
	locateBlock(block[0], x - 1, y + 1, z + 8);

	createBuilding_ConcreteModern(x + 31, y + 1, z + 5);
	
	createBuilding_HAPPY(x + 27, y, z + 31);

	LHM_building_2(x + 44, y, z + 31, 3);
	locateBlock(block[0], x + 60, y + 1, z + 37);
	locateBlock(block[0], x + 60, y + 1, z + 38);

	createBuilding_JGH_SECOND(x + 1, y + 1, z + 35);
	locateBlock(block[0], x + 11, y + 1, z + 60);
	
	locateBlock(block[0], x + 31, y + 1, z + 60);
	locateBlock(block[0], x + 32, y + 1, z + 60);
	
	locateBlock(block[0], x + 60, y + 1, z + 22);
	locateBlock(block[0], x + 60, y + 1, z + 23);
	
}

void building_block_5(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	locate_tree_road(x, y, z);
	create_ground(x, y, z);
	locate_light_road(x, y, z);

	LHM_building_2(x + 23, y, z + 44, 2);
	locateBlock(block[0], x + 29, y + 1, z + 60);
	locateBlock(block[0], x + 30, y + 1, z + 60);

	createBuilding_ConcreteModern(x + 39, y + 1, z + 49);

	createBuilding_JGH_SECOND(x + 1, y + 1, z + 37);
	locateBlock(block[0], x + 11, y + 1, z + 60);

	createBuilding_MARINA(x - 3, y, z + 19);

	createBuilding_HAPPY(x + 47, y, z + 16);
	locateBlock(block[0], x + 60, y + 1, z + 20);
	locateBlock(block[0], x + 60, y + 1, z + 21);

	LHM_building_1(x + 35, y, z, 4);
	locateBlock(block[0], x + 52, y + 1, z - 1);
	locateBlock(block[0], x + 53, y + 1, z - 1);

	createBuilding_ConcreteModern(x + 2, y + 1, z + 2);
}

void locate_building_block(int x, int y, int z, int n) {
	if (n == 1)
		building_block_1(x, y, z);
	if (n == 2)
		building_block_2(x, y, z);
	if (n == 3)
		building_block_3(x, y, z);
	if (n == 4)
		building_block_4(x, y, z);
	if (n == 5)
		building_block_5(x, y, z);
}