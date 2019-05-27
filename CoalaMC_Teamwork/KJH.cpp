#include<CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

void createBuilding_MARINA(int x, int y, int z)
{
	int sx = 0; int sy = 0; int sz = 0; int a, b, c;
<<<<<<< HEAD
	//int x, y, z;
=======
>>>>>>> master
	BlockID STONE = createBlock(BLOCK_STONE);
	BlockID WATER = createBlock(BLOCK_LAPIS_LAZULI);
	BlockID GOLD = createBlock(BLOCK_GOLD);
	BlockID WOOL = createWool(COLOR_LIGHT_BLUE);
	BlockID WHITE = createWool(COLOR_WHITE);
	BlockID FLOOR = createBlock(BLOCK_DIORITE);
	BlockID CEILING = createBlock(BLOCK_BEDROCK);
	BlockID DOOR = createDoor(DOOR_IRON);
	BlockID EMPTY = createBlock(BLOCK_AIR);
<<<<<<< HEAD
	//scanf("%d %d %d", &x, &y, &z);
=======
>>>>>>> master
	a = 0; b = 0; c = 0;
	for (sy = 45; sy < 47; sy++) {//두 빌딩을 연결하는 배 형태를 만드는 코드
		for (; sx < 15; sx++) { locateBlock(WHITE, x + sx, sy, z + sz); }
		for (; sx < 18; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 1); }
		for (; sx < 20; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 2); }
		for (; sx < 22; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 3); }
		for (; sx < 24; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 4); }
		for (; sx < 26; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 5); }
		for (; sx < 28; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 6); }
		locateBlock(WHITE, x + sx, 45, z + sz + 7);
		locateBlock(WHITE, x + sx, 46, z + sz + 7);
		sx = 0; sz = 0;
		for (; sx < 15; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 14); }
		for (; sx < 18; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 13); }
		for (; sx < 20; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 12); }
		for (; sx < 22; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 11); }
		for (; sx < 24; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 10); }
		for (; sx < 26; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 9); }
		for (; sx < 28; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 8); }
		sx = 0; sz = 0;
		for (; sz < 15; sz++) { locateBlock(WHITE, x, sy, z + sz); }
		sx = 0; sz = 0;
	}
	sy = 0;
	for (; sy < 41; sy++) {// 기본 빌딩 틀을 만드는 코드
		sx = 4; sz = 0;
		for (; sx < 13; sx++) {
			locateBlock(STONE, x + sx, 4 + sy, z + sz);
			locateBlock(STONE, x + sx, 4 + sy, z + sz + 14);
		}
		for (sx = 4; sz < 15; sz++)
		{
			locateBlock(STONE, x + sx, 4 + sy, z + sz);
			locateBlock(STONE, x + sx + 8, 4 + sy, z + sz);
		}
	}

	sy = 0; sx = 0;
	for (; sy < 39; sy += 5) {
		for (int a = 4; a < 7; a++)
		{
			for (sx = 6, sz = 0; sx < 11; sx++) {
				locateBlock(WOOL, x + sx, sy + a + 1, z + sz);
				locateBlock(WOOL, x + sx, sy + a + 1, z + sz + 14);
			}
			sx = 4;
			for (sz = 4; sz < 11; sz++)
			{
				locateBlock(WOOL, x + sx, sy + a + 1, z + sz);
				locateBlock(WOOL, x + sx + 8, sy + a + 1, z + sz);
			}
		}
	}
	//빌딩의 유리를 만드는 코드

	b = 13;
	sx = 17;
	sy = 0;
	for (; sy < 41; sy++) {// 기본 빌딩 틀을 만드는 코드
		sz = 0;
		for (sx = 17; sx < 26; sx++) {
			locateBlock(STONE, x + sx, 4 + sy, z + sz);
			locateBlock(STONE, x + sx, 4 + sy, z + sz + 14);
		}
		for (sx = 17; sz < 15; sz++)
		{
			locateBlock(STONE, x + sx, 4 + sy, z + sz);
			locateBlock(STONE, x + sx + 8, 4 + sy, z + sz);
		}
	}

	sy = 0; sx = b;
	for (; sy < 39; sy += 5) {
		for (int a = 4; a < 7; a++)
		{
			for (sx = 6 + b, sz = 0; sx < 11 + b; sx++) {
				locateBlock(WOOL, x + sx, sy + a + 1, z + sz);
				locateBlock(WOOL, x + sx, sy + a + 1, z + sz + 14);
			}
			sx = 4 + b;
			for (sz = 4; sz < 11; sz++)
			{
				locateBlock(WOOL, x + sx, sy + a + 1, z + sz);
				locateBlock(WOOL, x + sx + 8, sy + a + 1, z + sz);
			}
		}
	}
	sx = 0; sz = 0;
	for (int i = 1; i < 28; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 7);
	}
	for (int i = 1; i < 26; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 8);
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 6);
	}
	for (int i = 1; i < 24; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 9);
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 5);
	}
	for (int i = 1; i < 22; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 10);
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 4);
	}
	for (int i = 1; i < 20; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 11);
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 3);
	}
	for (int i = 1; i < 18; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 12);
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 2);
	}
	for (int i = 1; i < 15; i++) {
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 13);
		locateBlock(FLOOR, x + sx + i, 45, z + sz + 1);
	}
	for (sx = 4; sx < 13; sx++) {//천장과 바닥을 만드는 코드
		for (sz = 0; sz < 15; sz++) {
			locateBlock(CEILING, x + sx, 4, z + sz);
			locateBlock(CEILING, x + sx, 44, z + sz);
			locateBlock(CEILING, x + sx + 13, 4, z + sz);
			locateBlock(CEILING, x + sx + 13, 44, z + sz);
		}
	}

	sy = 46;
	for (sx = 17; sx > 11; sx--) {
		for (sz = 11; sz > 3; sz--)
		{
			locateBlock(WATER, x + sx, sy, z + sz);
		}
	}
	for (sx = 20; sx > 17; sx--) {
		for (sz = 5; sz < 10; sz++)
		{
			locateBlock(WATER, sx + x, sy, sz + z);
		}
	}

	
	sy = 46;
		for (sx = 20, sz = 5; sz < 10; sz++) {
			locateBlock(GOLD, x + sx, sy, z + sz);
		}
		sz = 0;
		locateBlock(GOLD, x + 18, sy, z + sz + 5);
		locateBlock(GOLD, x + 19, sy, z + sz + 5);
		locateBlock(GOLD, x + 18, sy, z + sz + 9);
		locateBlock(GOLD, x + 19, sy, z + sz + 9);
		locateBlock(GOLD, x + 17, sy, z + sz + 4);
		locateBlock(GOLD, x + 17, sy, z + sz + 10);
		for (sx = 17; sx > 11; sx--)
		{
			locateBlock(GOLD, x + sx, sy, z + sz + 11);
			locateBlock(GOLD, x + sx, sy, z + sz + 3);
		}
		for (sz = 11, sx++; sz > 3; sz--)
		{
			locateBlock(GOLD, x + sx, sy, z + sz);
		}
	
		for (sy = 46; sy < 49; sy++)
		{
			sz = 0;
			for (sx = 8; sx > 2; sx--)
			{
				locateBlock(CEILING, x + sx, sy, z + sz + 11);
				locateBlock(CEILING, x + sx, sy, z + sz + 3);
			}

			for (sz = 11; sz > 2; sz--)
			{
				sx = 8;
				locateBlock(CEILING, x + sx, sy, z + sz);
				sx = 2;
				locateBlock(CEILING, x + sx, sy, z + sz);
			}
		}
		locateBlock(EMPTY, x + 8, 47, z + 8);
		locateBlock(EMPTY, x + 8, 46, z + 8);
	}
