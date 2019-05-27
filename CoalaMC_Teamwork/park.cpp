#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#include <math.h>
#pragma comment(lib, "CoalaMOD.lib")

void park_tree_1(int x, int y, int z) {

}

void park_tree_2(int x, int y, int z) {

}

void park_tree_3(int x, int y, int z) {

}

void park_tree_4(int x, int y, int z) {

}

void park_lake(int x, int y, int z, int min, int max) {
	//using polar coordinate
	//랜덤 구현 실패, 별로 변형이 없음, 그냥 원형으로 해야하는 것으로 보임.
	//단 각도의 approximation을 90도로 잡고 min과 max의 차이를 크게 잡으면 꽤 멋진 대칭 조형물이 나옴
	const double pi = 3.14159265358979;
	const double radian = pi / 18000;

	for (double q = 0; q < 9000; q++) {
		//0도 부터 90도까지를 정의
		int tmp_random = create_random_number(min, max);
		//printf("%llf %llf\n", cos(q * radian), sin(q * radian));
		if (cos(q * radian) > sin(q * radian)) {
			int tmpzp = z;
			int tmpzm = z;
			double tmpx = x;
			//printf("1 %llf %llf\n", cos(q * radian) * tmp_random, cos(q * radian) * tmp_random / sin(q * radian) * tmp_random);
			for (double i = x; i < x + cos(q * radian) * tmp_random; i += cos(q * radian) * tmp_random / (sin(q * radian) * tmp_random == 0 ? 1 : sin(q * radian) * tmp_random)) {
				locateWater(createWater(), int(i), y, tmpzp);
				locateWater(createWater(), int(tmpx), y, tmpzm);
				locateWater(createWater(), int(tmpx), y, tmpzp);
				locateWater(createWater(), int(i), y, tmpzm);
				++tmpzp;
				--tmpzm;
				tmpx -= cos(q * radian) * tmp_random / (sin(q * radian) * tmp_random == 0 ? 1 : sin(q * radian) * tmp_random);
				//printf("1-1\n");
			}
		}
		else if (cos(q * radian) < sin(q * radian)) {
			int tmpxp = x;
			int tmpxm = x;
			double tmpz = z;
			//printf("2 %llf %llf\n", sin(q * radian) * tmp_random, sin(q * radian) * tmp_random / cos(q * radian) * tmp_random);
			for (double i = z; i < z + sin(q * radian) * tmp_random; i += sin(q * radian) * tmp_random / (cos(q * radian) * tmp_random == 0 ? 1 : cos(q * radian) * tmp_random)) {
				locateWater(createWater(), tmpxp, y, int(i));
				locateWater(createWater(), tmpxm, y, int(tmpz));
				locateWater(createWater(), tmpxp, y, int(tmpz));
				locateWater(createWater(), tmpxm, y, int(i));
				++tmpxp;
				--tmpxm;
				tmpz -= sin(q * radian) * tmp_random / (cos(q * radian) * tmp_random == 0 ? 1 : cos(q * radian) * tmp_random);
				//printf("1-2\n");
			}
		}
	}

	for (int i = 0; i < create_random_number(min, max); i++) {
		locateWater(createWater(), x, y, z + i);
		locateWater(createWater(), x, y, z - i);
		locateWater(createWater(), x + i + 1, y, z);
		locateWater(createWater(), x - i - 1, y, z);
	}
}

void park(int x, int y, int z) {

}