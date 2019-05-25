#include <CoalaMOD.h>
#include "utils.h"
#pragma comment(lib, "CoalaMOD.lib")

BlockID my_cobblestone = createBlock(BLOCK_COBBLESTONE);

void create_road(int x, int z, int cntx, int cntz) {
	//여기에서 x, z입력은 좌표가 아니라 x, z축의 블럭 개수를 의미한다.
	//각 블럭의 크기는 60 * 60의 크기이다.
	//길의 폭읜 7칸이다.
	int tmpx = cntx, tmpz = cntz;
	++cntx;
	++cntz;
	for (int i = 0; i < cntx; i++) {
		roadx(x, z, (tmpx * 60) + (cntx * 7));
		x += 67;
	}

	for (int i = 0; i < cntz; i++) {
		roadz(x, z, (tmpz * 60) + (cntz * 7));
		z += 67;
	}

}

void roadx(int x, int z, int len) {
	for (int i = z; i < 7; i++) {
		for (int j = x; j < len; j++) {
			locateBlock(my_cobblestone, j, 4, i);
		}
	}
}

void roadz(int x, int z, int len) {
	for (int i = x; i < 7; i++) {
		for (int j = z; j < len; j++) {
			locateBlock(my_cobblestone, i, 4, j);
		}
	}
}