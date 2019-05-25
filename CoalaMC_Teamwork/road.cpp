#include <CoalaMOD.h>
#include "utils.h"
#pragma comment(lib, "CoalaMOD.lib")

BlockID my_cobblestone = createBlock(BLOCK_COBBLESTONE);

void create_road(int x, int z, int cntx, int cntz) {
	//���⿡�� x, z�Է��� ��ǥ�� �ƴ϶� x, z���� �� ������ �ǹ��Ѵ�.
	//�� ���� ũ��� 60 * 60�� ũ���̴�.
	//���� ���� 7ĭ�̴�.
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