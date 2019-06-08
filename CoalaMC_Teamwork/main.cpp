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

int main() {
	
	/*
	주의사항
	현재는 입력값이 없는 상태입니다. 입력을 받고싶으면 scanf가 있는 주석을 해제해 주세요.
	마을의 크기를 입력할 때 주의해야 합니다. 마을의 크기가 지나치게 크면 25 * 25이상 일때 빌드가 실패할 수 있습니다.
	마을의 크기를 너무 크게 잡을 때 빌드가 굉장히 오래걸립니다.
	추천하는 크기는 10 * 10의 크기입니다.
	*/

	//이 변수를 조정하면 길과 건물의 변수 모두 통일되게 조정된다.
	int allx = 0, ally = 4, allz = 0;
	//이변수는 x, z축의 블럭 수를 지정하는 변수입니다.
	//이 변수만 조정하면 전체적으로 적용되게 됩니다.
	int Bblockx = 10, Bblockz = 10;
	
	/*
	printf("마을이 시작할 좌표를 입력해주세요.\n");
	printf("마을은 입력된 좌표로 부터 + 방향으로 생성됩니다.\n");
	scanf("%d %d %d", &allx, &ally, &allz);
	printf("마을의 크기를 각각 x방향, y방향으로 입력해주세요.\n");
	printf("입력받은 값은 각 축에 60 * 60크기의 블럭을 생성하는 수 입니다.\n");
	scanf("%d %d", &Bblockx, &Bblockz);
	*/

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
	
	//건물을 만들고 그 위에 공원을 생성하므로 공기블럭으로 공원이 생성될 위치를 BLOCK_AIR로 초기화해준다.
	//공원을 만들기 위한 좌표를 선택하는 반복문이다. 랜덤의 위치에 생성합니다.
	tmpx = allx + 7; tmpy = ally; tmpz = allz + 7;
	tmpx += 67;
	tmpz += 67;
	x = tmpx; y = tmpy; z = tmpz;
	for (int i = 0; i < Bblockx/2 - 1; i++) {
		z = tmpz;
		for (int j = 0; j < Bblockz/2 - 1; j++) {
			if (!create_random_number(0, 7)) {
				reset_park_position(x, y, z);
				park(x, y, z);
			}
			z += 134;
		}
		x += 134;
	}
	
	//createBuilding_Tall_ConcreteModern(allx + 67 * (Bblockx / 2) + 7, ally, allz + 67 * (Bblockz / 2) + 7);

}
