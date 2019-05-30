#include <CoalaMOD.h>
#include "utils.h"
#pragma comment(lib, "CoalaMOD.lib")

void createBuilding_Tall_ConcreteModern(int x, int y, int z) {
	ConcreteID silverConcrete = createConcrete(COLOR_LIGHT_GRAY, true);
	ConcreteID blackConcrete = createConcrete(COLOR_BLACK, true);
	ConcreteID grayConcrete = createConcrete(COLOR_GRAY, true);
	BlockID grass = createBlock(BLOCK_GRASS);
	BlockID glass = createBlock(BLOCK_GLASS);

	// ¹Ù´Ú
	const int groundY = y - 1;
	for (int fx = x; fx < x + 20; fx++)
		for (int fz = z; fz < z + 10; fz++)
			locateBlock(grass, fx, groundY, fz);

	// °Ç¹° ¸¸µé±â ½ÃÀÛ
	const int floorHeight = 4;
	bool floorOut = true;

	// Ãþ ½×±â (1Ãþ -> 2Ãþ -> 3Ãþ -> ...)
	for (int i = 0; y + i < 260; i += floorHeight) {
		int sx = x, ex = x + 60,
			sz = z, ez = z + 60;
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
}