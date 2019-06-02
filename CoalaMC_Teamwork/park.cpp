#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#include <math.h>
#define ABS(x) ((x) < 0 ? -(x) : (x))
#pragma comment(lib, "CoalaMOD.lib")

//나무를 만드는 함수들
void park_tree_1(int x, int y, int z) {
	int wood_random = create_random_number(0, 5);
	int plant_random = create_random_number(6, 11);
	int height = create_random_number(5, 8);
	int leaveHeight = create_random_number(3, 5);
	int leaveStart = height - leaveHeight + 1;
	if (leaveStart < 2) leaveStart = 1;

	for (int i = 0; i < height; i++)
		locateWood(wood[wood_random], x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 2; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(plant[plant_random], lx, y + i, lz);
	for (int i = leaveStart + leaveHeight - 2; i < leaveStart + leaveHeight; i++)
		for (int lx = x - 1; lx <= x + 1; lx++)
			for (int lz = z - 1; lz <= z + 1; lz++)
				if ((ABS(lx - x) != 1 || ABS(lz - z) != 1 || i == leaveStart + leaveHeight - 2) && (i == leaveStart + leaveHeight - 2 ? (lx != x || lz != z) : true))
					locatePlant(plant[plant_random], lx, y + i, lz);

}

void park_tree_2(int x, int y, int z) {
	int wood_random = create_random_number(0, 5);
	int plant_random = create_random_number(6, 11);
	int height = create_random_number(4, 7);
	int leaveHeight = 3;
	int leaveStart = height - leaveHeight + 1;

	for (int i = 0; i < height; i++)
		locateWood(wood[wood_random], x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 1; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(plant[plant_random], lx, y + i, lz);
	locatePlant(plant[plant_random], x - 1, y + leaveStart + leaveHeight - 1, z);
	locatePlant(plant[plant_random], x + 1, y + leaveStart + leaveHeight - 1, z);
	locatePlant(plant[plant_random], x, y + leaveStart + leaveHeight - 1, z - 1);
	locatePlant(plant[plant_random], x, y + leaveStart + leaveHeight - 1, z + 1);
	locatePlant(plant[plant_random], x, y + leaveStart + leaveHeight - 1, z);

}

void park_tree_3(int x, int y, int z) {
	WoodID wood = createWood(WOOD_BIRCH, STRIP_UP_DOWN); // 나무기둥
	PlantID leaf = createPlant(PLANT_BIRCH_LEAVES);

	int height = create_random_number(5, 8);
	int leaveHeight = create_random_number(3, 5);
	int leaveStart = height - leaveHeight + 1;
	if (leaveStart < 2) leaveStart = 1;

	for (int i = 0; i < height; i++)
		locateWood(wood, x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 2; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(leaf, lx, y + i, lz);
	for (int i = leaveStart + leaveHeight - 2; i < leaveStart + leaveHeight; i++)
		for (int lx = x - 1; lx <= x + 1; lx++)
			for (int lz = z - 1; lz <= z + 1; lz++)
				if ((ABS(lx - x) != 1 || ABS(lz - z) != 1 || i == leaveStart + leaveHeight - 2) && (i == leaveStart + leaveHeight - 2 ? (lx != x || lz != z) : true))
					locatePlant(leaf, lx, y + i, lz);

}

void park_tree_4(int x, int y, int z) {
	WoodID wood = createWood(WOOD_OAK, STRIP_UP_DOWN); // 나무기둥
	PlantID leaf = createPlant(PLANT_OAK_LEAVES);
	
	int height = create_random_number(4, 7);
	int leaveHeight = 3;
	int leaveStart = height - leaveHeight + 1;

	for (int i = 0; i < height; i++)
		locateWood(wood, x, y + i, z);
	for (int i = leaveStart; i < leaveStart + leaveHeight - 1; i++)
		for (int lx = x - 2; lx <= x + 2; lx++)
			for (int lz = z - 2; lz <= z + 2; lz++)
				if ((ABS(lx - x) != 2 || ABS(lz - z) != 2) && (lx != x || lz != z))
					locatePlant(leaf, lx, y + i, lz);
	locatePlant(leaf, x - 1, y + leaveStart + leaveHeight - 1, z);
	locatePlant(leaf, x + 1, y + leaveStart + leaveHeight - 1, z);
	locatePlant(leaf, x, y + leaveStart + leaveHeight - 1, z - 1);
	locatePlant(leaf, x, y + leaveStart + leaveHeight - 1, z + 1);
	locatePlant(leaf, x, y + leaveStart + leaveHeight - 1, z);

}

void select_tree(int x, int y, int z, int n) {
	if (n == 1)
		park_tree_1(x, y, z);
	if (n == 2)
		park_tree_2(x, y, z);
	if (n == 3)
		park_tree_3(x, y, z);
	if (n == 4)
		park_tree_4(x, y, z);
}

//나무를 만드는 함수
void park_tree(int x, int y, int z) {
	++y;
	for (int i = x; i < x + 28; i+=7) {
		for (int j = z; j < z + 28; j+=7) {
			//locateBeacon(createBeacon(), i, y, j);
			select_tree(i, y, j, create_random_number(1, 4));
		}
	}
	
	for (int i = x; i < x + 28; i+=7) {
		for (int j = z + 105; j < z + 133; j+=7) {
			//locateBeacon(createBeacon(), i, y, j);
			select_tree(i, y, j, create_random_number(1, 4));
		}
	}

	for (int i = x + 105; i < x + 133; i+=7) {
		for (int j = z; j < z + 28; j+=7) {
			//locateBeacon(createBeacon(), i, y, j);
			select_tree(i, y, j, create_random_number(1, 4));
		}
	}

	for (int i = x + 105; i < x + 133; i+=7) {
		for (int j = z + 105; j < z + 133; j+=7) {
			//locateBeacon(createBeacon(), i, y, j);
			select_tree(i, y, j, create_random_number(1, 4));
		}
	}
}

//나무를 만드는 함수
void locate_park_tree(int x, int y, int z) {
	//using polar coordinate
	//랜덤 구현 실패, 별로 변형이 없음, 그냥 원형으로 해야하는 것으로 보임.
	//단 각도의 approximation을 90도로 잡고 min과 max의 차이를 크게 잡으면 꽤 멋진 대칭 조형물이 나옴

	/*
	수정이 매우 어려움 이 함수를 리펙토링시 주의 요망
	사용법은 제작자 이호민에게 문의
	*/
	int min = 55, max = 55;
	const double pi = 3.14159265358979;
	const double radian = pi / 180;

	for (double q = 0; q < 90; q++) {
		//0도 부터 90도까지를 정의
		int tmp_random = create_random_number(min, max);
		//printf("%llf %llf\n", cos(q * radian), sin(q * radian));
		double repec_tmp_sin = cos(q * radian) * tmp_random == 0 ? 1 : cos(q * radian) * tmp_random;
		double repec_tmp_cos = sin(q * radian) * tmp_random == 0 ? 1 : sin(q * radian) * tmp_random;
		if (cos(q * radian) > sin(q * radian)) {
			int tmpzp = z + 35;
			int tmpzm = z - 35;
			double tmpx = x;
			//printf("1 %llf %llf\n", cos(q * radian) * tmp_random, cos(q * radian) * tmp_random / sin(q * radian) * tmp_random);
			for (double i = x + 35; i < x + cos(q * radian) * tmp_random; i += cos(q * radian) * tmp_random / repec_tmp_cos) {
				if (!create_random_number(0, 2)) {
					select_tree(int(i), y, tmpzp, create_random_number(1, 4));
					select_tree(int(tmpx), y, tmpzm, create_random_number(1, 4));
					select_tree(int(tmpx), y, tmpzp, create_random_number(1, 4));
					select_tree(int(i), y, tmpzm, create_random_number(1, 4));
				}
				++tmpzp;
				--tmpzm;
				tmpx -= cos(q * radian) * tmp_random / repec_tmp_cos;
				//printf("1-1\n");
			}
		}
		else if (cos(q * radian) < sin(q * radian)) {
			int tmpxp = x + 35;
			int tmpxm = x - 35;
			double tmpz = z;
			//printf("2 %llf %llf\n", sin(q * radian) * tmp_random, sin(q * radian) * tmp_random / cos(q * radian) * tmp_random);
			for (double i = z + 35; i < z + sin(q * radian) * tmp_random; i += sin(q * radian) * tmp_random / repec_tmp_sin) {
				if (!create_random_number(0, 5)) {
					select_tree(tmpxp, y, int(i), create_random_number(1, 4));
					select_tree(tmpxm, y, int(tmpz), create_random_number(1, 4));
					select_tree(tmpxp, y, int(tmpz), create_random_number(1, 4));
					select_tree(tmpxm, y, int(i), create_random_number(1, 4));
				}
				++tmpxp;
				--tmpxm;
				tmpz -= sin(q * radian) * tmp_random / repec_tmp_sin;
				//printf("1-2\n");
			}
		}
	}

}

//주위에 나무를 만드는 함수
void locate_tree_around(int x, int y, int z) {
	for (int i = x - 1; i < x + 128; i += 7) {
		select_tree(i, y + 1, z - 1, create_random_number(1, 4));
		select_tree(i, y + 1, z + 127, create_random_number(1, 4));
	}
	for (int i = z - 1; i < z + 128; i += 7) {
		select_tree(x - 1, y + 1, i, create_random_number(1, 4));
		select_tree(x + 127, y + 1, i, create_random_number(1, 4));
	}
}

//호수를 만드는 함수
void park_lake(int x, int y, int z, int min, int max) {
	//using polar coordinate
	//랜덤 구현 실패, 별로 변형이 없음, 그냥 원형으로 해야하는 것으로 보임.
	//단 각도의 approximation을 90도로 잡고 min과 max의 차이를 크게 잡으면 꽤 멋진 대칭 조형물이 나옴

	/*
	수정이 매우 어려움 이 함수를 리펙토링시 주의 요망
	사용법은 제작자 이호민에게 문의
	*/

	const double pi = 3.14159265358979;
	const double radian = pi / 3600;

	for (double q = 0; q < 1800; q++) {
		//0도 부터 90도까지를 정의
		int tmp_random = create_random_number(min, max);
		//printf("%llf %llf\n", cos(q * radian), sin(q * radian));
		double repec_tmp_sin = cos(q * radian) * tmp_random == 0 ? 1 : cos(q * radian) * tmp_random;
		double repec_tmp_cos = sin(q * radian) * tmp_random == 0 ? 1 : sin(q * radian) * tmp_random;
		if (cos(q * radian) > sin(q * radian)) {
			int tmpzp = z;
			int tmpzm = z;
			double tmpx = x;
			//printf("1 %llf %llf\n", cos(q * radian) * tmp_random, cos(q * radian) * tmp_random / sin(q * radian) * tmp_random);
			for (double i = x; i < x + cos(q * radian) * tmp_random; i += cos(q * radian) * tmp_random / repec_tmp_cos) {
				locateWater(createWater(), int(i), y, tmpzp);
				locateWater(createWater(), int(tmpx), y, tmpzm);
				locateWater(createWater(), int(tmpx), y, tmpzp);
				locateWater(createWater(), int(i), y, tmpzm);
				locateWater(createWater(), int(i), y - 1, tmpzp);
				locateWater(createWater(), int(tmpx), y - 1, tmpzm);
				locateWater(createWater(), int(tmpx), y - 1, tmpzp);
				locateWater(createWater(), int(i), y - 1, tmpzm);
				++tmpzp;
				--tmpzm;
				tmpx -= cos(q * radian) * tmp_random / repec_tmp_cos;
				//printf("1-1\n");
			}
		}
		else if (cos(q * radian) < sin(q * radian)) {
			int tmpxp = x;
			int tmpxm = x;
			double tmpz = z;
			//printf("2 %llf %llf\n", sin(q * radian) * tmp_random, sin(q * radian) * tmp_random / cos(q * radian) * tmp_random);
			for (double i = z; i < z + sin(q * radian) * tmp_random; i += sin(q * radian) * tmp_random / repec_tmp_sin) {
				locateWater(createWater(), tmpxp, y, int(i));
				locateWater(createWater(), tmpxm, y, int(tmpz));
				locateWater(createWater(), tmpxp, y, int(tmpz));
				locateWater(createWater(), tmpxm, y, int(i));
				locateWater(createWater(), tmpxp, y - 1, int(i));
				locateWater(createWater(), tmpxm, y - 1, int(tmpz));
				locateWater(createWater(), tmpxp, y - 1, int(tmpz));
				locateWater(createWater(), tmpxm, y - 1, int(i));
				++tmpxp;
				--tmpxm;
				tmpz -= sin(q * radian) * tmp_random / repec_tmp_sin;
				//printf("1-2\n");
			}
		}
	}

	for (int i = 0; i < create_random_number(min, max); i++) {
		locateWater(createWater(), x, y, z + i);
		locateWater(createWater(), x, y, z - i - 1);
		locateWater(createWater(), x + i, y, z);
		locateWater(createWater(), x - i - 1, y, z);
		locateWater(createWater(), x, y - 1, z + i);
		locateWater(createWater(), x, y - 1, z - i - 1);
		locateWater(createWater(), x + i, y - 1, z);
		locateWater(createWater(), x - i - 1, y - 1, z);
	}
}

//공원이 만들어지는 공간을 초기화하는 함수
void reset_park_position(int x, int y, int z) {
	for (int i = y - 2; i < y + 1; i++) {
		for (int j = x; j < x + 127; j++) {
			for (int k = z; k < z + 127; k++) {
				locateBlock(block[0], j, i, k);
			}
		}
	}

	for (int i = y + 1; i < y + 50; i++) {
		for (int j = x - 4; j < x + 131; j++) {
			for (int k = z - 4; k < z + 131; k++) {
				locateBlock(block[0], j, i, k);
			}
		}
	}
}

//공원을 만드는 함수
void park(int x, int y, int z) {
	//공원을 만드는 함수입니다.
	//공원의 크기는 127 * 127로 건물 '블럭'의 4배의 면적을 가지고 있습니다.
	//locateBeacon(createBeacon(), x, y, z);

	//잔디블록으로 바닥을 체우는 함수입니다.
	for (int j = x; j < x + 127; j++) {
		for (int k = z; k < z + 127; k++) {
			locateBlock(block[8], j, y - 1, k);
			locateBlock(block[8], j, y, k);
			if (!create_random_number(0, 5)) {
				locateFlower(flower[create_random_number(0, 16)], j, y + 1, k);
			}
		}
	}

	//호수를 만드는 함수를 적용
	//x, z 좌표는 호수의 중심입니다.
	//현재는 공원의 중심에 호수가 생성되도록 x, z좌표가 설정되어있습니다.
	park_lake(x + 63, y, z + 63, 23, 23);
	park_tree(x, y, z);
	locate_park_tree(x + 63, y + 1, z + 63);
	locate_tree_around(x, y, z);

	locateWater(createWater(), x + 63, y + 7, z + 63);
	locateWater(createWater(), x + 62, y + 6, z + 63);
	locateWater(createWater(), x + 64, y + 6, z + 63);
	locateWater(createWater(), x + 63, y + 6, z + 62);
	locateWater(createWater(), x + 63, y + 6, z + 64);
	for (int i = y; i < y + 6; i++) {
		locateWater(createWater(), x + 61, i, z + 63);
		locateWater(createWater(), x + 65, i, z + 63);
		locateWater(createWater(), x + 63, i, z + 61);
		locateWater(createWater(), x + 63, i, z + 65);
		locateWater(createWater(), x + 64, i, z + 64);
		locateWater(createWater(), x + 64, i, z + 62);
		locateWater(createWater(), x + 62, i, z + 62);
		locateWater(createWater(), x + 62, i, z + 64);
	}

	//좌표를 선택하는 반복문입니다.
	/*
	++y;
	for (int i = x; i < x + 127; i++) {
		for (int j = z; j < z + 127; j++) {

		}
	}
	*/
}