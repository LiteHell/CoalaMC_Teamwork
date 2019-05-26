#include <CoalaMOD.h>
#include "utils.h"
#pragma comment(lib, "CoalaMOD.lib")
//건물 제작 함수를 만들어주시면 됩니다.
//main함수를 쓸 필요는 없습니다.
#define _CRT_SECURE_NO_WARNINGS
#include"pch.h"
#include<CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int main()
{
	int sx = 0; int sy = 0; int sz = 0; int x, y, z; int a, b, c;
	BlockID STONE = createBlock(BLOCK_STONE);
	BlockID WATER = createBlock(BLOCK_LAPIS_LAZULI);
	BlockID GOLD = createBlock(BLOCK_GOLD);
	BlockID WOOL = createWool(COLOR_LIGHT_BLUE);
	BlockID WHITE = createWool(COLOR_WHITE);
	scanf("%d %d %d", &x, &y, &z);
	a = 0; b = 0; c = 0;
	for (sy = 29; sy < 31; sy++) {//두 빌딩을 연결하는 배 형태를 만드는 코드
		for (; sx < 15; sx++) { locateBlock(WHITE, x + sx, sy, z + sz); }
		for (; sx < 18; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 1); }
		for (; sx < 20; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 2); }
		for (; sx < 22; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 3); }
		for (; sx < 24; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 4); }
		for (; sx < 26; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 5); }
		for (; sx < 28; sx++) { locateBlock(WHITE, x + sx, sy, z + sz + 6); }
		locateBlock(WHITE, x + sx, 29, z + sz + 7);
		locateBlock(WHITE, x + sx, 30, z + sz + 7);
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
	for (; sy < 25; sy++) {// 기본 빌딩 틀을 만드는 코드
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
	for (; sy < 22; sy+=5) {
		for (int a = 4; a < 7; a++)
		{
			for (sx = 6, sz = 0; sx < 11; sx++) {
				locateBlock(WOOL, x + sx, sy + a, z + sz);
				locateBlock(WOOL, x + sx, sy + a, z + sz + 14);
			}
			sx = 4;
			for (sz = 4; sz < 11; sz++)
			{
				locateBlock(WOOL, x + sx, sy+a, z + sz);
				locateBlock(WOOL, x + sx + 8, sy+a, z + sz);
			}
		}
	}
	//빌딩의 유리를 만드는 코드
	
	b = 13;

	for (; sy < 25; sy++) {// 기본 빌딩 틀을 만드는 코드
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
	for (; sy < 22; sy += 5) {
		for (int a = 4; a < 7; a++)
		{
			for (sx = 6+b, sz = 0; sx < 11+b; sx++) {
				locateBlock(WOOL, x + sx, sy + a, z + sz);
				locateBlock(WOOL, x + sx, sy + a, z + sz + 14);
			}
			sx = 4+b;
			for (sz = 4; sz < 11; sz++)
			{
				locateBlock(WOOL, x + sx, sy + a, z + sz);
				locateBlock(WOOL, x + sx + 8, sy + a, z + sz);
			}
		}
	}
	//빌딩의 유리를 만드는 코드
	return 0;
}
