#include <CoalaMOD.h>
#include "utils.h"

#pragma comment(lib, "CoalaMOD.lib")
#define locateBlock_s(block, x, y, z) if (sx <= x && x <= ex && sy <= y && y <= ey && sz <= z && z <= ez) locateBlock(block, x, y, z)
#define locateBricks_s(block, x, y, z) if (sx <= x && x <= ex && sy <= y && y <= ey && sz <= z && z <= ez) locateBricks(block, x, y, z)
#define lnstallStairs_s(stairs, x, y, z, orientation) if (sx <= x && x <= ex && sy <= y && y <= ey && sz <= z && z <= ez) installStairs(stairs, x, y, z, orientation)
#define SIMPLE_ORIENTATION calculateOrientation(x, z, sx + offset, sz + offset, ex - offset, ez - offset)

BlockOrientation calculateOrientation(int x, int z, int sx, int sz, int ex, int ez) {
	// x+ = east
	// z+ = south
	if (x == sx) {
		return FACING_EAST;
	}
	else if (x == ex) {
		return FACING_WEST;
	}
	else if (z == sz) {
		// westnorth
		return FACING_SOUTH;
	}
	else if (z == ez) {
		return FACING_NORTH;
	}
	throw (BlockOrientation)-1;
}

void createBuilding_StoneShrine(int x, int y, int z)
{
	BlockID stone = createBlock(BLOCK_STONE);

	// ¹Ù´Ú
	for (int fx = x; fx < x + 30; fx++)
		for (int fz = z; fz < z + 30; fz++)
			locateBlock(stone, fx, y, fz);

	// sx, sy, ez
	int sx = x + 5;
	int sy = y + 1;
	int sz = z + 9;

	// ex, ey, ez
	int ex = sx + 26;
	int ez = sz + 26;
	int ey = sy + 21;

	// ºí·° ¼±¾ð
	BricksID bricks = createBricks(BRICKS_STONE);
	BlockID air = createBlock(BLOCK_AIR);
	BlockID light = createBlock(BLOCK_GLOWSTONE);
	BlockID glass = createBlock(BLOCK_GLASS);
	StairsID stairs = createStairs(STAIRS_STONE_BRICK, false);

	
	sz += 1;
	ez += 1;

	// ¹Ð±â
	for (int x = sx; x <= ex; x++)
		for (int y = sy; y <= ey; y++)
			for (int z = sz; z <= ez; z++)
				locateBlock_s(air, x, y, z);

	// Åä´ë
	const int baseHeight = 2;
	const int baseTop = sy + baseHeight - 1;
	for (int y = sy, offset = 0; y <= baseTop; y++, offset++)
		for (int x = sx + offset; x <= ex - offset; x++)
			for (int z = sz + offset; z <= ez - offset; z++) {
				locateBricks_s(bricks, x, y, z);
				if (x == sx + offset || x == ex - offset || z == sz + offset || z == ez - offset)
					lnstallStairs_s(stairs, x, y, z, SIMPLE_ORIENTATION);
			}



	// XÃà ±âµÕ °Ç¼³
	for (int x = sx + 3; x <= ex - 3; x += 2) {
		for (int y = baseTop; y <= ey; y++) {
			locateBricks_s(bricks, x, y, sz + 3);
			locateBricks_s(bricks, x, y, ez - 3);
		}
	}

	// ZÃà ±âµÕ °Ç¼³
	for (int z = sz + 3; z <= ez - 3; z += 2) {
		for (int y = baseTop; y <= ey; y++) {
			locateBricks_s(bricks, sx + 3, y, z);
			locateBricks_s(bricks, ex - 3, y, z);
		}
	}

	// ÁöºØ
	for (int y = ey - 2, offset = 0; y <= ey; y++, offset++)
		for (int x = sx + offset; x <= ex - offset; x++)
			for (int z = sz + offset; z <= ez - offset; z++)
				if (x != sx + offset && x != ex - offset && z != sz + offset && z != ez - offset) {
					if (y != ey - 2)
						locateBricks_s(bricks, x, y, z);
				}
				else
					lnstallStairs_s(stairs, x, y, z, SIMPLE_ORIENTATION);

	// Àüµî
	for (int x = sx + 6; x <= ex - 6; x += 2)
		for (int z = sz + 6; z <= ez - 6; z += 2) {
			locateBlock_s(glass, x, ey - 1, z);
			locateBlock_s(light, x, ey, z);
		}
	
}

typedef BlockID StainedGlassID;
DEF_CREATE_BLOCK_WITH_COLOR(StainedGlass);

void createBuilding_ConcreteModern(int x, int y, int z) {
	ConcreteID silverConcrete = createConcrete(COLOR_LIGHT_GRAY, true);
	ConcreteID blackConcrete = createConcrete(COLOR_BLACK, true);
	ConcreteID grayConcrete = createConcrete(COLOR_GRAY, true);
	BlockID grass = createBlock(BLOCK_GRASS);
	BlockID glass = createBlock(BLOCK_GLASS);

	// ¹Ù´Ú
	const int groundY = y;
	for (int fx = x; fx < x + 20; fx++)
		for (int fz = z; fz < z + 10; fz++)
			locateBlock(grass, fx, groundY, fz);

	// °Ç¹° ¸¸µé±â ½ÃÀÛ
	y += 1;

	const int floorHeight = 4, floorCount = 5 + create_random_number(1,2)*2;
	bool floorOut = true;

	// Ãþ ½×±â (1Ãþ -> 2Ãþ -> 3Ãþ -> ...)
	for (int i = 0; i < floorHeight * floorCount; i += floorHeight) {
		int sx = x, ex = x + 20,
			sz = z, ez = z + 10;
		if (!floorOut) {
			sx += 1;
			ex -= 1;
			sz += 1;
			ez -= 1;
		}

		// Ãþ ¸¸µé±â
		for (int fy = y + i; fy < y + i + floorHeight; fy++)
			for (int fx = sx; fx < ex; fx++)
				for (int fz = sz; fz < ez; fz++)
					if (fz == sz || fz == ez - 1 || fx == sx || fx == ex - 1)
						if (create_random_bool())
							locateBlock(glass, fx, fy, fz);
						else
							locateConcrete(floorOut ? silverConcrete : blackConcrete, fx, fy, fz);
		floorOut = !floorOut;
	}

	// ÁöºØ ¸¸µé±â
	for (int fx = x; fx < x + 20; fx++)
		for (int fz = z; fz < z + 10; fz++)
			locateConcrete(grayConcrete, fx, y + floorHeight * floorCount, fz);
}