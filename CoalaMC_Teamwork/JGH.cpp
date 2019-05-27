#include <CoalaMOD.h>
#include "utils.h"
#include "JGH.h"
#pragma comment(lib, "CoalaMOD.lib")
//건물 제작 함수를 만들어주시면 됩니다.
//main함수를 쓸 필요는 없습니다.

void createBuilding_JGH(int sx, int sy, int sz) // sy는 4로 해 주세요
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
/*테스트용 변수 설정
	int sx, sy, sz;

	sx = 100;
	sy = 4;
	sz = 700;
*/
	const int size = 21;
	
	int ex, ez;
	int ey_glass;
	int mx, my, mz;

	int sx_b, sy_b, sz_b;
	int ex_b, ey_b, ez_b;
	int mx_b, my_b, mz_b;

	int building;
	int wool_color;

	ex = sx + size - 1;
	ez = sz + size - 1;
	ey_glass = sy + 3;
	
	mx = (sx + ex) / 2;
	mz = (sz + ez) / 2;
	
	// 벽 생성
	for (int y = sy; y <= ey_glass - 1; y++)
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
			locateBlock(iron, x, sy - 1, z);
		}
	}
	for (int x = sx; x <= ex; x++)
	{
		for (int z = sz; z <= ez; z++)
		{
			locateBlock(glass, x, ey_glass, z);
		}
	}

	//문 생성
	installDoor(door, (sx + ex) / 2, sy, sz, FACING_EAST);
	installDoor(door, (sx + ex) / 2, sy, ez, FACING_WEST);
	installDoor(door, sx, sy, (sz + ez) / 2, FACING_NORTH);
	installDoor(door, ex, sy, (sz + ez) / 2, FACING_NORTH);
	
	//도형들 생성
	for (int i = 0; i < 8; i++)
	{
		wool_color = create_random_number(0, 3);
		building = create_random_number(1, 4);
		
		switch (i)
		{
		case 0:
			sx_b = sx + 1, sy_b = ey_glass + 1, sz_b = sz + 1;
			ex_b = mx - 1, ey_b = ey_glass + size / 2 - 1, ez_b = mz - 1;
			break;
		case 1:
			sx_b = mx + 1, sy_b = ey_glass + 1, sz_b = sz + 1;
			ex_b = ex - 1, ey_b = ey_glass + size / 2 - 1, ez_b = mz - 1;
			break;
		case 2:
			sx_b = sx + 1, sy_b = ey_glass + 1, sz_b = mz + 1;
			ex_b = mx - 1, ey_b = ey_glass + size / 2 - 1, ez_b = ez - 1;
			break;
		case 3:
			sx_b = mx + 1, sy_b = ey_glass + 1, sz_b = mz + 1;
			ex_b = ex - 1, ey_b = ey_glass + size / 2 - 1, ez_b = ez - 1;
			break;
		case 4:
			sx_b = sx + 1, sy_b = ey_glass + size/2 + 1, sz_b = sz + 1;
			ex_b = mx - 1, ey_b = ey_glass + size - 1, ez_b = mz - 1;
			break;
		case 5:
			sx_b = mx + 1, sy_b = ey_glass + size/2 + 1, sz_b = sz + 1;
			ex_b = ex - 1, ey_b = ey_glass + size - 1, ez_b = mz - 1;
			break;
		case 6:
			sx_b = sx + 1, sy_b = ey_glass + size/2 + 1, sz_b = mz + 1;
			ex_b = mx - 1, ey_b = ey_glass + size - 1, ez_b = ez - 1;
			break;
		case 7:
			sx_b = mx + 1, sy_b = ey_glass + size/2 + 1, sz_b = mz + 1;
			ex_b = ex - 1, ey_b = ey_glass + size - 1, ez_b = ez - 1;
			break;
		default:
			continue;
		}

		mx_b = (sx_b + ex_b) / 2, my_b = (sy_b + ey_b) / 2, mz_b = (sz_b + ez_b) / 2;

		switch (building)
		{
		case 1:
			for (int x = sx_b; x <= ex_b; x++)
			{
				for (int y = sy_b; y <= ey_b; y++)
				{
					for (int z = sz_b; z <= ez_b; z++)
					{
						locateWool(wool[wool_color], x, y, z);
					}
				}
			}
			break;
		case 2:
			for (int x = sx_b; x <= ex_b; x++)
			{
				for (int y = sy_b; y <= ey_b; y++)
				{
					for (int z = sz_b; z <= ez_b; z++)
					{
						if (pow((x - mx_b), 2) + pow((y - my_b), 2) + pow((z - mz_b), 2) >= pow((size / 4 - 2), 2) && pow((x - mx_b), 2) + pow((y - my_b), 2) + pow((z - mz_b), 2) <= pow((size / 4 - 1 ), 2))
						{
							locateWool(wool[wool_color], x, y, z);
						}
					}
				}
			}
			break;
		case 3:
			for (int x = sx_b; x <= ex_b; x++)
			{
				for (int y = sy_b; y <= ey_b; y++)
				{
					for (int z = sz_b; z <= ez_b; z++)
					{
						locateWool(wool[wool_color], x, y, z);
					}
				}
			}
			break;
		case 4:
			for (int x = sx_b; x <= ex_b; x++)
			{
				for (int y = sy_b; y <= ey_b; y++)
				{
					for (int z = sz_b; z <= ez_b; z++)
					{
						locateWool(wool[wool_color], x, y, z);
					}
				}
			}
			break;
		default:
			continue;
		}
	}
	return;
}