# CoalaMC_Teamwork
기초프로그래밍 1학년 1학기 팀과제


# 이호민이 맡은 건물

* LHM_building_1
    - x, y, z, type값을 입력받는 건물 제작 함수이다.
    - (25, 11~23, 15) 크기의 건물이다.
    - type은 1~4까지 입력받을 수 있으며 각각 서, 남, 동, 북 쪽을 바라보고 문과 발광석이 생성된다.
        + 문을 이런ㅅ기으로 생성한 이유는 어느 방향으로 길이 지나가도 문을 원활히 생성시키기 위함이다.
    - 높이(y)가 유동적인 이유는 create_random_number함수를 이용해 0~2까지의 난수를 입력받아 1~3층의 건물을 만들기 때문이다.
    - 건물 내부과 지붕에 사용된 양털 역시 create_random_number함수를 이용해 LHM_building_1호출시마다 랜덤으로 색을 지정받는다.
    - 3차원 배열을 이용해 블록을 지정하였으며 각각 1층, 2~3층 지붕으로 구성되어 있다.
        + 1층은 0~5까지 2~3층은 6~11까지 지붕은 12~16까지이다.
