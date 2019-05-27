#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#include <stdio.h>
#include "buildings.h"
#include "utils.h"
#include "land_mark.h"
#include "road.h"
#include "building_block.h"
#pragma comment(lib, "CoalaMOD.lib")

/*
건물을 만드는 함수는 이름이 겹치지 않도록 해야하며 건물임이 표시되야 하고,
매개변수로 x, y, z를 받으며, x+, z+ 방향으로 건물을 만들어야 합니다.
그리고 건물을 만들시 바닥도 만들어야 합니다.
*/

//한 블록의 가로 세로는 60 * 60칸이다.
//길의 폭은 칸이며 건물의 둘레에 울타리를 설치한다.

void locate_building_block(int x, int y, int z, int n) {
	if (n == 1)
		building_block_1(x, y, z);
	if (n == 2)
		building_block_2(x, y, z);
	if (n == 3)
		building_block_3(x, y, z);
	if (n == 4)
		building_block_4(x, y, z);
	if (n == 5)
		building_block_5(x, y, z);
}

int main() {
	/*
	createBuilding_StoneShrine(100, 3, 100);
	createBuilding_ConcreteModern(150, 3, 150);
	return 0;
	*테스트 완료.
	*/

	/*
	LHM_building_1(100, 4, 100, 4);
	LHM_building_2(150, 4, 150, 4);
	LHM_room(0, 0, 0, 41, 25, 25);
	create_road(0, 0, 10, 10);
	park_lake(600, 3, 600, 30, 30);
	//*$@테스트 완료, 집 잘 생성됨, 문 방향 잘 바뀜@$*
	*/

	//이 변수를 조정하면 길과 건물의 변수 모두 통일되게 조정된다.
	int allx = 3000, ally = 4, allz = 3000;
	//이변수는 x, z축의 블럭 수를 지정하는 변수입니다.
	//이 변수만 조정하면 전체적으로 적용되게 됩니다.
	int Bblockx = 7, Bblockz = 5;
	
	//도로를 먼저 생성한 후 건물들을 생성한다.
	create_road(allx, ally, allz, Bblockx, Bblockz);

	//건물들의 시작 좌표는 도로 좌표에서 x + 7, y, z + 7이다.
	//ex) 10, 4, 10의 경우 17, 4, 17에서 시작해야 한다.
	int tmpx = allx + 7, tmpy = ally, tmpz = allz + 7;
	int x = tmpx, y = tmpy, z = tmpz;
	for (int i = 0; i < Bblockx; i++) {
		z = tmpz;
		for (int j = 0; j < Bblockz; j++) {
			locate_building_block(x, y, z, create_random_number(1, 5));
			z += 67;
		}
		x += 67;
	}

}
