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
	//���⿡�� x, z�Է��� ��ǥ�� �ƴ϶� x, z���� �� ������ �ǹ��Ѵ�.
	//�� ���� ũ��� 60 * 60�� ũ���̴�.
	//���� ���� 7ĭ�̴�.
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
