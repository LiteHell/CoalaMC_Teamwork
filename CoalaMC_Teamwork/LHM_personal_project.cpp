#include <CoalaMOD.h>
#include "utils.h"
#include "LHM_constants.h"
#pragma comment(lib, "CoalaMOD.lib")

#define SWAP(s, e){int t = s; s = e ; e = t;}

void LHM_room(int sx, int sy, int sz, int ex, int ey, int ez) {

	if (sx > ex) SWAP(sx, ex);
	if (sy > ey) SWAP(sy, ey);
	if (sz > ez) SWAP(sz, ez);

	//건물을 세울 좌표를 입력받아 건물의 크기를 늘리는 함수
	//ex-sx, ey-sy, ez-sz의 최솟값을 구해서 각 반복문의 (ex-sx) / N, (ey-sy) / N, (ez-sz) / N 을 대체시키면 각 축의 길이의 비율을 다르게 늘려도 건물의 비율은 일정하게 유지할 수 있다. 
	//지금 상태에선 각 축의 비율을 다르게 늘리면 그에따라 건물의 비율도 변하도록 되어있다.

	int arr[50][50][50] = {			//각 사각형마다 y축을 기준으로 한 층을 나타냄. + x=20,y=12,z=12
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{18,18,18,18,18,18,18,18,18,18,18,18},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,31,19,19,19,19,19,19,19,19,31,19},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,81,81,81,81,81,81,32,31, 0},{ 0,31,32,32,81,81,81,81,32,32,31, 0},{ 0,31,32,32,32,81,81,32,32,32,31, 0},{18,31,31,31,31,31,31,31,31,31,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0,81,31,31,81, 0, 0,32, 0},{ 0,32, 0, 0, 0,32,32, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0,31,31, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0,18,18,18,18,18,18,18,18, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0,81,81,31,31,81,81, 0,32, 0},{ 0,32, 0,81,81,32,32,81,81, 0,32, 0},{ 0,32, 0,81,31, 0, 0,31,81, 0,32, 0},{ 0,32, 0,81,31, 0, 0,31,81, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,31,31,31,31,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0,81,81,81,81, 0, 0,32, 0},{ 0,32, 0, 0,81,81,81,81, 0, 0,32, 0},{ 0,32, 0, 0,81,81,81,81, 0, 0,32, 0},{ 0,32, 0, 0,81, 0, 0,81, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,31,31,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,31,31, 0, 0,31,31, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,27,27,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,27,27,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,31,31, 0, 0,31,31, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,19,19,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,31,31,31,31,19,19,19,19},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,78,78, 0, 0,78,78, 0,32, 0},{ 0,32, 0,31,31, 0, 0,31,31, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,31,31,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,31,31,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,32,32,32,32,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0,18,18,18,18, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,32,32,32,32,32,32,18,18, 0},{ 0, 0,18,31,31,31,31,31,31,18, 0, 0},{ 0, 0, 0,18,18,18,18,18,18, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{ 0,32, 0, 0, 0, 0, 0, 0, 0, 0,32, 0},{18,31, 0, 0, 0, 0, 0, 0, 0, 0,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0,18,18,18,18,18,18,18,18, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,31,19,19,19,19,19,19,19,19,31,19},{ 0,31,32,31,81, 0, 0,81,31,32,31, 0},{ 0,31,32,31,81, 0, 0,81,31,32,31, 0},{ 0,31,32,31,81, 0, 0,81,31,32,31, 0},{ 0,31,32,31,31,81,81,31,31,32,31, 0},{ 0,31,32,32,31,31,31,31,32,32,31, 0},{ 0,31,32,32,32,32,32,32,32,32,31, 0},{18,31,31,31,31,31,31,31,31,31,31,18},{ 0,18,18,18,18,18,18,18,18,18,18, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
		{ {19,19,19,19,19,19,19,19,19,19,19,19},{ 0, 0, 0, 0,31, 0, 0,31, 0, 0, 0, 0},{ 0, 0, 0, 0,31, 0, 0,31, 0, 0, 0, 0},{ 0, 0, 0, 0,31, 0, 0,31, 0, 0, 0, 0},{ 0, 0, 0, 0, 0,31,31, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{18,18,18,18,18,18,18,18,18,18,18,18},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},{ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, },
	};

	int tmpx = sx, tmpy = sy, tmpz = sz;
	for (int q = 0; q < 12; q++) {			//y축의 길이를 바꾸는 반복문-1
		for (int t = 0; t < (ey - sy) / 12; t++) {			//y축의 길이를 바꾸는 반복문-2
			tmpx = sx;
			for (int i = 0; i < 20; i++) {			//x축의 길이를 바꾸는 반복문-1
				for (int l = 0; l < (ex - sx) / 20; l++) {			//x축의 길이를 바꾸는 반복문-2
					tmpz = sz;
					for (int j = 0; j < 12; j++) {			//z축의 길이를 바꾸는 반복문-1
						for (int k = 0; k < (ez - sz) / 12; k++) {			//z축의 길이를 바꾸는 반복문-2
							if (arr[i][q][j] < 51) locateBlock(block[arr[i][q][j]], tmpx, tmpy, tmpz);			//block을 만드는 함수
							else if (arr[i][q][j] < 67) locateCarpet(carpet[arr[i][q][j] % 51], tmpx, tmpy, tmpz);			//carpet을 만드는 함수
							else if (arr[i][q][j] < 83) locateWool(wool[arr[i][q][j] % 67], tmpx, tmpy, tmpz);			//wool을 만드는 함수
							else if (arr[i][q][j] < 89) locateWood(wood[arr[i][q][j] % 83], tmpx, tmpy, tmpz);			//wood를 만드는 함수
							++tmpz;
						}
					}
					++tmpx;
				}
			}
			++tmpy;
		}
	}
}
