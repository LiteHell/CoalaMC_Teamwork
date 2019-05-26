#include <CoalaMOD.h>
#include "utils.h"
#include "KJH.h"
#pragma comment(lib, "CoalaMOD.lib")
//건물 제작 함수를 만들어주시면 됩니다.
//main함수를 쓸 필요는 없습니다.

void createBuilding_KJH(int sx, int sy, int sz) // sy는 4로 해 주세요
{
	BlockID glass = createBlock(BLOCK_GLASS);
	BlockID iron = createBlock(BLOCK_IRON);
	DoorID door = createDoor(DOOR_OAK, true, HINGE_LEFT);
	
	WoolID wool[4] = {
		createWool(COLOR_WHITE),
		createWool(COLOR_YELLOW),
		createWool(COLOR_GREEN),
		createWool(COLOR_ORANGE)
	};
/* 테스트용
	int sx, sy, sz;
	
	sx = 300;
	sy = 4;
	sz = 300;
*/
	const int size = 21;
	int ex, ez;
	int ey_glass;

	ex = sx + size - 1;
	ez = sz + size - 1;
	ey_glass = sy + 3;
	
	// 벽 생성
	for (int y = sy; y <= ey_glass-1; y++)
	{
		for (int x = sx; x <= ex; x++)
		{
			locateBlock(glass, x, y, sz);
		}
		for (int x = sx; x <= ex; x++)
		{
			locateBlock(glass, x, y, ez);
		}
		for (int z = sz; z <= ez; z++)
		{
			locateBlock(glass, sx, y, z);
		}
		for (int z = sz; z <= ez; z++)
		{
			locateBlock(glass, ex, y, z);
		}
	}

	//바닥, 천장 생성
	for (int x = sx; x <= ex; x++)
	{
		for (int z = sz; z <= ez; z++)
		{
			locateBlock(iron, x, sy-1, z);
		}
	}
	for (int x = sx; x <= ex; x++)
	{
		for (int z = sz; z <= ez; z++)
		{
			locateBlock(glass, x, ey_glass ,z);
		}
	}

	//문 생성
	installDoor(door, (sx + ex) / 2, sy, sz, FACING_EAST);
	installDoor(door, (sx + ex) / 2, sy, ez, FACING_WEST);
	installDoor(door, sx, sy, (sz + ez) / 2, FACING_NORTH);
	installDoor(door, ex, sy, (sz + ez) / 2, FACING_NORTH);

	create_random_number(1, 4);


	return;
}