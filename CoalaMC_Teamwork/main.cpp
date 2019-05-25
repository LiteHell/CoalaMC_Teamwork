#define _CRT_SECURE_NO_WARNINGS
#include <CoalaMOD.h>
#include <stdio.h>
#include "buildings.h"
#include "utils.h"
#include "land_mark.h"
#include "road.h"
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
	LHM_building_1(100, 4, 100, 4);
	LHM_building_2(150, 4, 150, 4);
	LHM_room(0, 0, 0, 41, 25, 25);
	*$@테스트 완료, 집 잘 생성됨, 문 방향 잘 바뀜@$*
	*/

	create_road(0, 0, 10, 10);

}
