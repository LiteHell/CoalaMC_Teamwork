# CoalaMC_Teamwork
기초프로그래밍 1학년 1학기 팀과제

# 기본 구상
1. 총 8개의 건물을 만드는 함수를 제작합니다.
2. 이것을 조합해서 5 ~ 6개의 건물이 포함된 5개 정도의 건물 '블럭'(60 * 60규모)을 만듭니다.
3. 폭이 7칸이고 60 * 60칸씩 내부가 비는 길을 제작합니다.
4. 60 * 60의 공간에 5가지의 건물 '블럭'을 랜덤으로 선택해 넣어줍니다.
5. 이것으로 랜덤으로 건물이 생성되는 아주 거대한 마을을 제작할 수 있습니다.

# 이호민이 맡은 건물

* LHM_building_1
    - x, y, z, type값을 입력받는 건물 제작 함수이다.
    - (25, 11~23, 15) 크기의 건물이다.
        + 높이(y)가 유동적인 이유는 create_random_number함수를 이용해 0 ~ 2까지의 난수를 입력받아 1 ~ 3층의 건물을 만들기 때문이다.
    - type은 1~4까지 입력받을 수 있으며 각각 서, 남, 동, 북 쪽을 바라보고 문과 발광석이 생성된다.
        + 문을 이런식으로 생성한 이유는 어느 방향으로 길이 지나가도 문을 원활히 생성시키기 위함이다.
    - 건물 내부과 지붕에 사용된 양털 역시 create_random_number함수를 이용해 LHM_building_1호출시마다 랜덤으로 색을 지정받는다.
    - 3차원 배열을 이용해 블록을 지정하였으며 각각 1층, 2~3층, 지붕으로 구성되어 있다.
        + 1층은 0 ~5 까지, 2 ~ 3층은 6 ~ 11까지, 지붕은 12 ~ 16까지이다.

* LHM_building_2
    - x, y, z, type값을 입력받는 건물 제작 함수이다.
    - (15, 11~23, 15) 크기의 건물이다.
        + 높이(y)가 유동적인 이유는 create_random_number함수를 이용해 0 ~ 2까지의 난수를 입력받아 1 ~ 3층의 건물을 만들기 때문이다.
    - type은 1~4까지 입력받을 수 있으며 각각 서, 남, 동, 북 쪽을 바라보고 문과 발광석이 생성된다.
        + 문을 이런으로 생성한 이유는 어느 방향으로 길이 지나가도 문을 원활히 생성시키기 위함이다.
    - 건물 내부과 지붕에 사용된 양털 역시 create_random_number함수를 이용해 LHM_building_1호출시마다 랜덤으로 색을 지정받는다.
    - 3차원 배열을 이용해 블록을 지정하였으며 각각 1층, 2~3층, 지붕으로 구성되어 있다.
        + 1층은 0 ~5 까지, 2 ~ 3층은 6 ~ 11까지, 지붕은 12 ~ 16까지이다.

* LHM.cpp안에 있다.
* 제작자 - 이호민

# 신연진이 맡은 건물

* CreateBuiling_StoneShrine
  * x, y, z를 받는다.
  * (27, 22, 28) 크기의 건물이다.

* CreateBuilding_ModernConcrete
  * x, y, z를 받는다.
  * (20, 29~37, 10) 크기의 건물이다.
  * 유리 위치는 랜덤하게 생성된다.

# 김지훈이 맡은 건물


# 장기훈이 맡은 건물
* createBuilding_KJH(int sx, int sy, int sz)
    - 장기훈의 건물을 제작한다.
	- sx, sy, sz는 건물 생성의 시작점의 좌표이다.
	- 시작점의 좌표로부터 x축의 +방향으로, z축의 +방향으로 건물을 생성한다.
	- 건물의 x축 방향의 크기는 21, z축 방향의 크기도 21이다.
	- sy는 4로 하는 것이 여러모로 이롭다.

# create_random_number함수

* 이 함수는 min값과 max값을 입력받아 min과 max사이의 정수중 1개를 랜덤으로 return하는 함수이다. 
* 함수의 목적은 랜덤 값을 받아 건물의 층, 블록들의 색깔, 건물블럭의 랜덤 선택 등을 위해서 만든 함수이다.
* randutils.cpp안에 있다.
* 제작자 - 이호민

# create_road함수
* 이 함수는 x, y, z좌표, cntx, cntz를 입력받는 함수입니다.
    - x, y, z좌표는 길이 생성되는 한 지점을 의미합니다.
    - cntx, cntz는 각각 x축의 블럭의 갯수, z축의 블럭의 갯수를 의미합니다.
        + 여기에서의 블럭은 마인크래프트의 블럭이 아니라 건물 여러개를 합친 한 '블럭'을 의미합니다.
* roadx함수
    - 이 함수는 create_road함수에서 호출되며 x축 방향으로 폭이 7, 길이가 <code>(cntx * 60) + ((cntx + 1) * 7)</code>인 길을 생성합니다.
    - (cntx * 60) + ((cntx + 1) * 7)이 길이는 한 '블럭'의 크기가 60 * 60의 크기라는 것과 길의 폭이 7이라는 것을 고려한 것입니다.
    - 이 함수는 길의 block을 cobblestone과 mossy_cobblestone중 1개로 골라 랜덤으로 생성합니다.
        + 때문에 이끼낀 조약돌과 조약돌의 조합으로 랜덤한 길이 생성됩니다.
        + 여기에도 역시 create_random_number function이 이용되었습니다.
        + <code>block[12 + create_random_number(0, 1) * 13]</code>이것을 이용해 랜덤으로 선택합니다.
        + <code>block[12]</code>는 그냥 cobblestone이고 <code>block[25]</code>는 mossy_cobblestone입니다. 여기서 0과 1중 1개를 랜덤으로 뽑아오고 0일때는 그냥 12를 1일때는 25가 되게 해서 cobblestone과 mossy_cobblestone중 랜덤으로 고를 수 있도록 설계했습니다.
* roadz함수
    - 이 함수의 기능은 roadx함수와 같고 축이 z축으로 바뀌었을 뿐입니다.
    - 길의 폭은 7로 똑같지만 축이 z축으로 바뀌었으므로 길의 길이는 <code>(cntz * 60) + ((cntz + 1) * 7)</code>가 됩니다.
    
* road.cpp안에 있다.
* 제작자 - 이호민

# LHM_constants.h 해더
* 이 해더는 이호민이 건물을 생성할 때 3차원 배열에 들어있는 숫자를 적절한 정해진 block으로 전환하기 위해 만들어진 해더입니다.
* 총 0 ~ 110까지 지정되어있고 Block, Carpet, Wool, Wood, Fence, Pane, Bricks, Planks로 구성되있습니다.
* 사용하기 위해선 <code>#include "LHM_constants.h"</code>를 맨 위에 작성해주면 된다. 그리고 각주에 써있는 숫자를 참고해 block을 불러올 수 있다.

* 초기 제작자 - 이호민
* 수정 - 신연진

# building_block_n함수
* 이 함수는 x, y, z를 입력받는 함수입니다.
    - x, y, z는 각각 건물 건물 '블럭'이 위치할 한 꼭짓점을 나타냅니다.
* 1 ~ 5번까지 있으며 각각의 함수 내부에 있는 건물의 조합이 다릅니다.
* main.cpp에 있는 locate_building_block함수에 의해 랜덤으로 각 번호가 선택됩니다.
* locate_fence함수가 포함되어 있습니다.
    - locate_fence함수는 건물 '블럭'주변에 나무 울타리를 생성합니다.
    
* building_block.cpp안에 있다.
* 제작자 - 이호민
