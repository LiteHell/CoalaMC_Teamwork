#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#pragma comment(lib, "CoalaMOD.lib")

void spawn_villager(int x, int y, int z) {
	locateMob(mob[46], x, y, z);
}

void roadx(int x, int y, int z, int len) {
	for (int i = z; i < z + 7; i++) {
		for (int j = x; j < x + len; j++) {
			if (i != z && i != z + 6) {
				if (!create_random_number(0, 20))
					spawn_villager(j, y + 1, i);
			}
			locateBlock(block[12 + create_random_number(0, 1) * 13], j, y, i);
		}
	}
}

void roadz(int x, int y, int z, int len) {
	for (int i = x; i < x + 7; i++) {
		for (int j = z; j < z + len; j++) {
			if (i != x && i != x + 6) {
				if (!create_random_number(0, 20))
					spawn_villager(i, y + 1, j);
			}
			locateBlock(block[12 + create_random_number(0, 1) * 13], i, y, j);
		}
	}
}

void create_road(int x, int y, int z, int cntx, int cntz) {
	//여기에서 x, z입력은 시작 좌표이고 각각 +방향으로 늘어난다.
	//cntx, cntz는 각각 x, z방향의 블록 개수이다.
	//각 블럭의 크기는 60 * 60의 크기이다.
	//길의 폭은 7칸이다.
	int tmpx = x, tmpz = z;

	for (int i = 0; i < cntz + 1; i++) {
		//printf("%d %d %d\n", tmpx, z, i);
		roadx(x, y, tmpz, (cntx * 60) + ((cntx + 1) * 7));
		tmpz += 67;
	}

	for (int i = 0; i < cntx + 1; i++) {
		//printf("***%d %d %d\n", x, tmpz, i);
		roadz(tmpx, y, z, (cntz * 60) + ((cntz + 1) * 7));
		tmpx += 67;
	}

}
