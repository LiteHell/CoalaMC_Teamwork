#include <math.h>
#include <random>
using namespace std;

int create_random_number(int min, int max) {
	//랜덤넘버 생성기 함수. 함수를 호출하면 min ~ max중 랜덤의 수를 return한다.
	//한 블록에 어떤 유형의 건물 블록을 채울지 결정할 때 사용
	/*
	$사용법$
	1. 이 함수를 사용하려면 min과 max를 입력합니다.
	2. 이후에 min ~ max사이의 값이 랜덤으로 return됩니다.
	ex) min = 1, max = 5라면 1 ~ 5사이의 값이 랜덤으로 return.
	*/
	random_device rnd;
	mt19937_64 rng(rnd());
	uniform_int_distribution<__int64> val(min, max);
	int n = val(rng);
	return n;
}