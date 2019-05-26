#include <CoalaMOD.h>
#include "utils.h"
#include "KJH.h"
#pragma comment(lib, "CoalaMOD.lib")
//�ǹ� ���� �Լ��� ������ֽø� �˴ϴ�.
//main�Լ��� �� �ʿ�� �����ϴ�.

void createBuilding_KJH(int sx, int sy, int sz) // sy�� 4�� �� �ּ���
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
	
	/*�׽�Ʈ��
	int sx, sy, sz;

	sx = 300;
	sy = 4;
	sz = 300;
	*/
	
	const int size = 21;
	int ex, ez;
	int ey_glass;

	int building;
	int wool_color;

	ex = sx + size - 1;
	ez = sz + size - 1;
	ey_glass = sy + 3;

	// �� ����
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

	//�ٴ�, õ�� ����
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

	//�� ����
	installDoor(door, (sx + ex) / 2, sy, sz, FACING_EAST);
	installDoor(door, (sx + ex) / 2, sy, ez, FACING_WEST);
	installDoor(door, sx, sy, (sz + ez) / 2, FACING_NORTH);
	installDoor(door, ex, sy, (sz + ez) / 2, FACING_NORTH);

	
	int sx_b, sy_b, sz_b;
	int ex_b, ey_b, ez_b;

	//ù��? ���� sx+1, ey_glass+1, sz+1 ~ (sx+ex)/2 - 1, ey_glass + size/2 - 1, (sz+ez)/2 -1
	//ù��°�� ������ ���� 
	for (int i = 0; i < 8; i++)
	{
		wool_color = create_random_number(0, 3);
		building = create_random_number(1, 4);
		switch (i)
		{
		case 0:
			sx_b = sx + 1, sy_b = ey_glass + 1, sz_b = sz + 1;
			ex_b = (sx + ex) / 2 - 1, ey_b = ey_glass + size / 2 - 1, (sz + ez) / 2 - 1;
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			continue;
		}

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
					{/*
						if (x)
						{
						locateWool(wool[wool_color], x, y, z);
					*/}
				}
			}
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			continue;
		}
	}
	return;
}