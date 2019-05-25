#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#pragma comment(lib, "CoalaMOD.lib")


void roadx(int x, int z, int len) {
	for (int i = z; i < z + 7; i++) {
		for (int j = x; j < x + len; j++) {
			locateBlock(block[12], j, 4, i);
		}
	}
}

void roadz(int x, int z, int len) {
	for (int i = x; i < x + 7; i++) {
		for (int j = z; j < z + len; j++) {
			locateBlock(block[12], i, 4, j);
		}
	}
}

void create_road(int x, int z, int cntx, int cntz) {
	//여기에서 x, z입력은 좌표가 아니라 x, z축의 블럭 개수를 의미한다.
	//각 블럭의 크기는 60 * 60의 크기이다.
	//길의 폭읜 7칸이다.
	int tmpx = x, tmpz = z;

	for (int i = 0; i < cntx + 1; i++) {
		//printf("%d %d %d\n", tmpx, z, i);
		roadx(x, tmpz, (cntx * 60) + ((cntx + 1) * 7));
		tmpz += 67;
	}

	for (int i = 0; i < cntz + 1; i++) {
		//printf("***%d %d %d\n", x, tmpz, i);
		roadz(tmpx, z, (cntz * 60) + ((cntz + 1) * 7));
		tmpx += 67;
	}

}
