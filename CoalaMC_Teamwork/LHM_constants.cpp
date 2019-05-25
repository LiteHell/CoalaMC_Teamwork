#include <CoalaMOD.h>
#include "LHM_constants.h"
#pragma comment(lib, "CoalaMOD.lib")

BlockID my_air = createBlock(BLOCK_AIR);										//0			  0
BlockID my_stone = createBlock(BLOCK_STONE);									//1			  1
BlockID my_granite = createBlock(BLOCK_GRANITE);								//2			  2
BlockID my_polished_granite = createBlock(BLOCK_POLISHED_GRANITE);				//3			  3
BlockID my_diorite = createBlock(BLOCK_DIORITE);								//4			  4
BlockID my_polished_diorite = createBlock(BLOCK_POLISHED_DIORITE);				//5			  5
BlockID my_andesite = createBlock(BLOCK_ANDESITE);								//6			  6
BlockID my_polished_andesite = createBlock(BLOCK_POLISHED_ANDESITE);			//7			  7
BlockID my_grass = createBlock(BLOCK_GRASS);									//8			  8
BlockID my_dirt = createBlock(BLOCK_DIRT);										//9			  9
BlockID my_coarse_dirt = createBlock(BLOCK_COARSE_DIRT);						//10		 10
BlockID my_podzol = createBlock(BLOCK_PODZOL);									//11		 11
BlockID my_cobblestone = createBlock(BLOCK_COBBLESTONE);						//12		 12
BlockID my_bedrock = createBlock(BLOCK_BEDROCK);								//13		 13
BlockID my_sand = createBlock(BLOCK_SAND);										//14		 14
BlockID my_red_sand = createBlock(BLOCK_RED_SAND);								//15		 15
BlockID my_gravel = createBlock(BLOCK_GRAVEL);									//16		 16
BlockID my_glass = createBlock(BLOCK_GLASS);									//17		 17
BlockID my_lapis_lazuli = createBlock(BLOCK_LAPIS_LAZULI);						//18		 18
BlockID my_sand_stone = createBlock(BLOCK_SAND_STONE);							//19		 19
BlockID my_chiseled_sand_stone = createBlock(BLOCK_CHISELED_SAND_STONE);		//20		 20
BlockID my_smooth_sand_stone = createBlock(BLOCK_SMOOTH_SAND_STONE);			//21		 21
BlockID my_gold = createBlock(BLOCK_GOLD);										//22		 22
BlockID my_iron = createBlock(BLOCK_IRON);										//23		 23
BlockID my_tnt = createBlock(BLOCK_TNT);										//24		 24
BlockID my_mossy_cobblestone = createBlock(BLOCK_MOSSY_COBBLESTONE);			//25		 25
BlockID my_obsidian = createBlock(BLOCK_OBSIDIAN);								//26		 26
BlockID my_diamond = createBlock(BLOCK_DIAMOND);								//27		 27
BlockID my_clay = createBlock(BLOCK_CLAY);										//28		 28
BlockID my_netherrack = createBlock(BLOCK_NETHERRACK);							//29		 29
BlockID my_soul_sand = createBlock(BLOCK_SOUL_SAND);							//30		 30
BlockID my_glowstone = createBlock(BLOCK_GLOWSTONE);							//31		 31
BlockID my_stained_glass = createBlock(BLOCK_STAINED_GLASS);					//32		 32
BlockID my_melon = createBlock(BLOCK_MELON);									//33		 33
BlockID my_mycelium = createBlock(BLOCK_MYCELIUM);								//34		 34
BlockID my_end_stone = createBlock(BLOCK_END_STONE);							//35		 35
BlockID my_emerald = createBlock(BLOCK_EMERALD);								//36		 36
BlockID my_nether_quartz = createBlock(BLOCK_NETHER_QUARTZ);					//37		 37
BlockID my_slime = createBlock(BLOCK_SLIME);									//38		 38
BlockID my_prismarine = createBlock(BLOCK_PRISMARINE);							//39		 39
BlockID my_hey_bale = createBlock(BLOCK_HAY_BALE);								//40		 40
BlockID my_coal = createBlock(BLOCK_COAL);										//41		 41
BlockID my_red_sandstone = createBlock(BLOCK_RED_SANDSTONE);					//42		 42
BlockID my_chiseled_red_santstone = createBlock(BLOCK_CHISELED_RED_SANDSTONE);	//43		 43
BlockID my_smooth_red_sandstone = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);		//44		 44
BlockID my_purpur = createBlock(BLOCK_PURPUR);									//45		 45
BlockID my_purpur_pillar = createBlock(BLOCK_PURPUR_PILLAR);					//46		 46
BlockID my_grass_path = createBlock(BLOCK_GRASS_PATH);							//47		 47
BlockID my_magma = createBlock(BLOCK_MAGMA);									//48		 48
BlockID my_nether_wart = createBlock(BLOCK_NETHER_WART);						//49		 49
BlockID my_bone = createBlock(BLOCK_BONE);										//50		 50

CarpetID my_carpet_white = createCarpet(COLOR_WHITE);							//0			 51
CarpetID my_carpet_orange = createCarpet(COLOR_ORANGE);							//1			 52
CarpetID my_carpet_magenta = createCarpet(COLOR_MAGENTA);						//2			 53
CarpetID my_carpet_light_blue = createCarpet(COLOR_LIGHT_BLUE);					//3			 54
CarpetID my_carpet_yellow = createCarpet(COLOR_YELLOW);							//4			 55
CarpetID my_carpet_lime = createCarpet(COLOR_LIME);								//5			 56
CarpetID my_carpet_pink = createCarpet(COLOR_PINK);								//6			 57
CarpetID my_carpet_gray = createCarpet(COLOR_GRAY);								//7			 58
CarpetID my_carpet_light_gray = createCarpet(COLOR_LIGHT_GRAY);					//8			 59
CarpetID my_carpet_cyan = createCarpet(COLOR_CYAN);								//9			 60
CarpetID my_carpet_purple = createCarpet(COLOR_PURPLE);							//10		 61
CarpetID my_carpet_blue = createCarpet(COLOR_BLUE);								//11		 62
CarpetID my_carpet_brown = createCarpet(COLOR_BROWN);							//12		 63
CarpetID my_carpet_green = createCarpet(COLOR_GREEN);							//13		 64
CarpetID my_carpet_red = createCarpet(COLOR_RED);								//14		 65
CarpetID my_carpet_black = createCarpet(COLOR_BLACK);							//15		 66

WoolID my_wool_white = createWool(COLOR_WHITE);									//0			 67
WoolID my_wool_orange = createWool(COLOR_ORANGE);								//1			 68
WoolID my_wool_magenta = createWool(COLOR_MAGENTA);								//2			 69
WoolID my_wool_light_blue = createWool(COLOR_LIGHT_BLUE);						//3			 70
WoolID my_wool_yellow = createWool(COLOR_YELLOW);								//4			 71
WoolID my_wool_lime = createWool(COLOR_LIME);									//5			 72
WoolID my_wool_pink = createWool(COLOR_PINK);									//6			 73
WoolID my_wool_gray = createWool(COLOR_GRAY);									//7			 74
WoolID my_wool_light_gray = createWool(COLOR_LIGHT_GRAY);						//8			 75
WoolID my_wool_cyan = createWool(COLOR_CYAN);									//9			 76
WoolID my_wool_purple = createWool(COLOR_PURPLE);								//10		 77
WoolID my_wool_blue = createWool(COLOR_BLUE);									//11		 78
WoolID my_wool_brown = createWool(COLOR_BROWN);									//12		 79
WoolID my_wool_green = createWool(COLOR_GREEN);									//13		 80
WoolID my_wool_red = createWool(COLOR_RED);										//14		 81
WoolID my_wool_black = createWool(COLOR_BLACK);									//15		 82

WoodID my_wood_oak = createWood(WOOD_OAK, STRIP_UP_DOWN);						//0			 83
WoodID my_wood_spruce = createWood(WOOD_SPRUCE, STRIP_UP_DOWN);					//1			 84
WoodID my_wood_birch = createWood(WOOD_BIRCH, STRIP_UP_DOWN);					//2			 85
WoodID my_wood_jungle = createWood(WOOD_JUNGLE, STRIP_UP_DOWN);					//3			 86
WoodID my_wood_acacia = createWood(WOOD_ACACIA, STRIP_UP_DOWN);					//4			 87
WoodID my_wood_dark_oak = createWood(WOOD_DARK_OAK, STRIP_UP_DOWN);				//5			 88

FenceID my_fence_oak = createFence(FENCE_OAK);									//0			 89
FenceID my_fence_spruce = createFence(FENCE_SPRUCE);							//1			 90
FenceID my_fence_birch = createFence(FENCE_BIRCH);								//2			 91
FenceID my_fence_jungle = createFence(FENCE_JUNGLE);							//3			 92
FenceID my_fence_dark_oak = createFence(FENCE_DARK_OAK);						//4			 93
FenceID my_fence_acacia = createFence(FENCE_ACACIA);							//5			 94
FenceID my_fence_nether_brick = createFence(FENCE_NETHER_BRICK);				//6			 95

PaneID my_pane_glass = createPane(PANE_GLASS);									//0			 96
PaneID my_pane_iron = createPane(PANE_IRON);									//1			 97

BricksID my_brick = createBricks(BRICKS);										//0			 98
BricksID my_brick_stone = createBricks(BRICKS_STONE);							//1			 99
BricksID my_brick_cracked_stone = createBricks(BRICKS_CRACKED_STONE);			//2			100
BricksID my_brick_mossy_stone = createBricks(BRICKS_MOSSY_STONE);				//3			101
BricksID my_brick_chiseled_stone = createBricks(BRICKS_CHISELED_STONE);			//4			102
BricksID my_brick_nether = createBricks(BRICKS_NETHER);							//5			103
BricksID my_brick_red_nether = createBricks(BRICKS_RED_NETHER);					//6			104

PlanksID my_planks_oak = createPlanks(PLANKS_OAK);								//0			105
PlanksID my_planks_spruce = createPlanks(PLANKS_SPRUCE);						//1			106
PlanksID my_planks_birch = createPlanks(PLANKS_BIRCH);							//2			107
PlanksID my_planks_jungle = createPlanks(PLANKS_JUNGLE);						//3			108
PlanksID my_planks_acacia = createPlanks(PLANKS_ACACIA);						//4			109
PlanksID my_planks_dark_oak = createPlanks(PLANKS_DARK_OAK);					//5			110

BlockID block[60] = {
	//��� ����
	my_air,						//0		0
	my_stone,					//1		1
	my_granite,					//2		2
	my_polished_granite,		//3		3
	my_diorite,					//4		4
	my_polished_diorite,		//5		5
	my_andesite,				//6		6
	my_polished_andesite,		//7		7
	my_grass,					//8		8
	my_dirt,					//9		9
	my_coarse_dirt,				//10	10
	my_podzol,					//11	11
	my_cobblestone,				//12	12
	my_bedrock,					//13	13
	my_sand,					//14	14
	my_red_sand,				//15	15
	my_gravel,					//16	16
	my_glass,					//17	17
	my_lapis_lazuli,			//18	18
	my_sand_stone,				//19	19
	my_chiseled_sand_stone,		//20	20
	my_smooth_sand_stone,		//21	21
	my_gold,					//22	22
	my_iron,					//23	23
	my_tnt,						//24	24
	my_mossy_cobblestone,		//25	25
	my_obsidian,				//26	26
	my_diamond,					//27	27
	my_clay,					//28	28
	my_netherrack,				//29	29
	my_soul_sand,				//30	30
	my_glowstone,				//31	31
	my_stained_glass,			//32	32
	my_melon,					//33	33
	my_mycelium,				//34	34
	my_end_stone,				//35	35
	my_emerald,					//36	36
	my_nether_quartz,			//37	37
	my_slime,					//38	38
	my_prismarine,				//39	39
	my_hey_bale,				//40	40
	my_coal,					//41	41
	my_red_sandstone,			//42	42
	my_chiseled_red_santstone,	//43	43
	my_smooth_red_sandstone,	//44	44
	my_purpur,					//45	45
	my_purpur_pillar,			//46	46
	my_grass_path,				//47	47
	my_magma,					//48	48
	my_nether_wart,				//49	49
	my_bone,					//50	50
};

CarpetID carpet[20] = {
	//ī�� ����
	my_carpet_white,		//0		51
	my_carpet_orange,		//1		52
	my_carpet_magenta,		//2		53
	my_carpet_light_blue,	//3		54
	my_carpet_yellow,		//4		55
	my_carpet_lime,			//5		56
	my_carpet_pink,			//6		57
	my_carpet_gray,			//7		58
	my_carpet_light_gray,	//8		59
	my_carpet_cyan,			//9		60
	my_carpet_purple,		//10	61
	my_carpet_blue,			//11	62
	my_carpet_brown,		//12	63
	my_carpet_green,		//13	64
	my_carpet_red,			//14	65
	my_carpet_black,		//15	66
};

WoolID wool[20] = {
	//���� ����
	my_wool_white,		//0		67
	my_wool_orange,		//1		68
	my_wool_magenta,	//2		69
	my_wool_light_blue,	//3		70
	my_wool_yellow,		//4		71
	my_wool_lime,		//5		72
	my_wool_pink,		//6		73
	my_wool_gray,		//7		74
	my_wool_light_gray,	//8		75
	my_wool_cyan,		//9		76
	my_wool_purple,		//10	77
	my_wool_blue,		//11	78
	my_wool_brown,		//12	79
	my_wool_green,		//13	80
	my_wool_red,		//14	81
	my_wool_black,		//15	82
};

WoodID wood[10] = {
	//���� ����
	my_wood_oak,		//0		83
	my_wood_spruce,		//1		84
	my_wood_birch,		//2		85
	my_wood_jungle,		//3		86
	my_wood_acacia,		//4		87
	my_wood_dark_oak,	//5		88
};

FenceID fence[10] = {
	//��Ÿ�� ����
	my_fence_oak,			//0		89
	my_fence_spruce,		//1		90
	my_fence_birch,			//2		91
	my_fence_jungle,		//3		92
	my_fence_dark_oak,		//4		93
	my_fence_acacia,		//5		94
	my_fence_nether_brick,	//6		95
};

PaneID pane[3] = {
	//����, ö�� ����
	my_pane_glass,		//0		96
	my_pane_iron,		//1		97
};

BricksID brick[10] = {
	//�긯 ����
	my_brick,					//0		 98
	my_brick_stone,				//1		 99
	my_brick_cracked_stone,		//2		100
	my_brick_mossy_stone,		//3		101
	my_brick_chiseled_stone,	//4		102
	my_brick_nether,			//5		103
	my_brick_red_nether,		//6		104
};

PlanksID plank[10] = {
	my_planks_oak,			//0		105
	my_planks_spruce,		//1		106
	my_planks_birch,		//2		107
	my_planks_jungle,		//3		108
	my_planks_acacia,		//4		109
	my_planks_dark_oak,		//5		110
};