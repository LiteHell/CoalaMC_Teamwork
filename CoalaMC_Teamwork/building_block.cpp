#include <CoalaMOD.h>
#include "utils.h"
#include "buildings.h"
#include "LHM_constants.h"
#pragma comment(lib, "CoalaMOD.lib")

//���� ���� �ּ� 5�� �̻� ���� ����Ѵ�.

void locate_fence(int x, int y, int z) {
	//��Ÿ���� ����� �Լ�
	//���μ��� ���δ� �Լ� �߰�
	for (int i = x - 1; i < x + 61; i++) {
		locateFence(fence[0], i, y + 1, z - 1);
		locateFence(fence[0], i, y + 1, z + 60);
	}
	for (int i = z - 1; i < z + 61; i++) {
		locateFence(fence[0], x - 1, y + 1, i);
		locateFence(fence[0], x + 60, y + 1, i);
	}
}

void building_block_1(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	LHM_building_1(x, y, z, 1);
}

void building_block_2(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	LHM_building_2(x, y, z, 1);
}

void building_block_3(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	createBuilding_MARINA(x, y, z);
}

void building_block_4(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	createBuilding_HAPPY(x, y, z);
}

void building_block_5(int x, int y, int z) {
	//locateBeacon(createBeacon(), x, y, z);
	locate_fence(x, y, z);
	createBuilding_JGH(x, y, z);
}
