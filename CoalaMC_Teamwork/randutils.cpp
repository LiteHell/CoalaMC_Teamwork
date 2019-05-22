#include <math.h>
#include <random>
using namespace std;

int create_random_number(int min, int max) {
	//�����ѹ� ������ �Լ�. �Լ��� ȣ���ϸ� min ~ max�� ������ ���� return�Ѵ�.
	//�� ��Ͽ� � ������ �ǹ� ����� ä���� ������ �� ���
	/*
	$����$
	1. �� �Լ��� ����Ϸ��� min�� max�� �Է��մϴ�.
	2. ���Ŀ� min ~ max������ ���� �������� return�˴ϴ�.
	ex) min = 1, max = 5��� 1 ~ 5������ ���� �������� return.
	*/
	random_device rnd;
	mt19937_64 rng(rnd());
	uniform_int_distribution<__int64> val(min, max);
	int n = val(rng);
	return n;
}