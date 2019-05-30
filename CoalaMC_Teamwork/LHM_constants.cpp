#include <CoalaMOD.h>
#include "LHM_constants.h"
#pragma comment(lib, "CoalaMOD.lib")

BlockID my_air = createBlock(BLOCK_AIR);												//0			  0
BlockID my_stone = createBlock(BLOCK_STONE);											//1			  1
BlockID my_granite = createBlock(BLOCK_GRANITE);										//2			  2
BlockID my_polished_granite = createBlock(BLOCK_POLISHED_GRANITE);						//3			  3
BlockID my_diorite = createBlock(BLOCK_DIORITE);										//4			  4
BlockID my_polished_diorite = createBlock(BLOCK_POLISHED_DIORITE);						//5			  5
BlockID my_andesite = createBlock(BLOCK_ANDESITE);										//6			  6
BlockID my_polished_andesite = createBlock(BLOCK_POLISHED_ANDESITE);					//7			  7
BlockID my_grass = createBlock(BLOCK_GRASS);											//8			  8
BlockID my_dirt = createBlock(BLOCK_DIRT);												//9			  9
BlockID my_coarse_dirt = createBlock(BLOCK_COARSE_DIRT);								//10		 10
BlockID my_podzol = createBlock(BLOCK_PODZOL);											//11		 11
BlockID my_cobblestone = createBlock(BLOCK_COBBLESTONE);								//12		 12
BlockID my_bedrock = createBlock(BLOCK_BEDROCK);										//13		 13
BlockID my_sand = createBlock(BLOCK_SAND);												//14		 14
BlockID my_red_sand = createBlock(BLOCK_RED_SAND);										//15		 15
BlockID my_gravel = createBlock(BLOCK_GRAVEL);											//16		 16
BlockID my_glass = createBlock(BLOCK_GLASS);											//17		 17
BlockID my_lapis_lazuli = createBlock(BLOCK_LAPIS_LAZULI);								//18		 18
BlockID my_sand_stone = createBlock(BLOCK_SAND_STONE);									//19		 19
BlockID my_chiseled_sand_stone = createBlock(BLOCK_CHISELED_SAND_STONE);				//20		 20
BlockID my_smooth_sand_stone = createBlock(BLOCK_SMOOTH_SAND_STONE);					//21		 21
BlockID my_gold = createBlock(BLOCK_GOLD);												//22		 22
BlockID my_iron = createBlock(BLOCK_IRON);												//23		 23
BlockID my_tnt = createBlock(BLOCK_TNT);												//24		 24
BlockID my_mossy_cobblestone = createBlock(BLOCK_MOSSY_COBBLESTONE);					//25		 25
BlockID my_obsidian = createBlock(BLOCK_OBSIDIAN);										//26		 26
BlockID my_diamond = createBlock(BLOCK_DIAMOND);										//27		 27
BlockID my_clay = createBlock(BLOCK_CLAY);												//28		 28
BlockID my_netherrack = createBlock(BLOCK_NETHERRACK);									//29		 29
BlockID my_soul_sand = createBlock(BLOCK_SOUL_SAND);									//30		 30
BlockID my_glowstone = createBlock(BLOCK_GLOWSTONE);									//31		 31
BlockID my_stained_glass = createBlock(BLOCK_STAINED_GLASS);							//32		 32
BlockID my_melon = createBlock(BLOCK_MELON);											//33		 33
BlockID my_mycelium = createBlock(BLOCK_MYCELIUM);										//34		 34
BlockID my_end_stone = createBlock(BLOCK_END_STONE);									//35		 35
BlockID my_emerald = createBlock(BLOCK_EMERALD);										//36		 36
BlockID my_nether_quartz = createBlock(BLOCK_NETHER_QUARTZ);							//37		 37
BlockID my_slime = createBlock(BLOCK_SLIME);											//38		 38
BlockID my_prismarine = createBlock(BLOCK_PRISMARINE);									//39		 39
BlockID my_hey_bale = createBlock(BLOCK_HAY_BALE);										//40		 40
BlockID my_coal = createBlock(BLOCK_COAL);												//41		 41
BlockID my_red_sandstone = createBlock(BLOCK_RED_SANDSTONE);							//42		 42
BlockID my_chiseled_red_santstone = createBlock(BLOCK_CHISELED_RED_SANDSTONE);			//43		 43
BlockID my_smooth_red_sandstone = createBlock(BLOCK_SMOOTH_RED_SANDSTONE);				//44		 44
BlockID my_purpur = createBlock(BLOCK_PURPUR);											//45		 45
BlockID my_purpur_pillar = createBlock(BLOCK_PURPUR_PILLAR);							//46		 46
BlockID my_grass_path = createBlock(BLOCK_GRASS_PATH);									//47		 47
BlockID my_magma = createBlock(BLOCK_MAGMA);											//48		 48
BlockID my_nether_wart = createBlock(BLOCK_NETHER_WART);								//49		 49
BlockID my_bone = createBlock(BLOCK_BONE);												//50		 50

CarpetID my_carpet_white = createCarpet(COLOR_WHITE);									//0			 51
CarpetID my_carpet_orange = createCarpet(COLOR_ORANGE);									//1			 52
CarpetID my_carpet_magenta = createCarpet(COLOR_MAGENTA);								//2			 53
CarpetID my_carpet_light_blue = createCarpet(COLOR_LIGHT_BLUE);							//3			 54
CarpetID my_carpet_yellow = createCarpet(COLOR_YELLOW);									//4			 55
CarpetID my_carpet_lime = createCarpet(COLOR_LIME);										//5			 56
CarpetID my_carpet_pink = createCarpet(COLOR_PINK);										//6			 57
CarpetID my_carpet_gray = createCarpet(COLOR_GRAY);										//7			 58
CarpetID my_carpet_light_gray = createCarpet(COLOR_LIGHT_GRAY);							//8			 59
CarpetID my_carpet_cyan = createCarpet(COLOR_CYAN);										//9			 60
CarpetID my_carpet_purple = createCarpet(COLOR_PURPLE);									//10		 61
CarpetID my_carpet_blue = createCarpet(COLOR_BLUE);										//11		 62
CarpetID my_carpet_brown = createCarpet(COLOR_BROWN);									//12		 63
CarpetID my_carpet_green = createCarpet(COLOR_GREEN);									//13		 64
CarpetID my_carpet_red = createCarpet(COLOR_RED);										//14		 65
CarpetID my_carpet_black = createCarpet(COLOR_BLACK);									//15		 66

WoolID my_wool_white = createWool(COLOR_WHITE);											//0			 67
WoolID my_wool_orange = createWool(COLOR_ORANGE);										//1			 68
WoolID my_wool_magenta = createWool(COLOR_MAGENTA);										//2			 69
WoolID my_wool_light_blue = createWool(COLOR_LIGHT_BLUE);								//3			 70
WoolID my_wool_yellow = createWool(COLOR_YELLOW);										//4			 71
WoolID my_wool_lime = createWool(COLOR_LIME);											//5			 72
WoolID my_wool_pink = createWool(COLOR_PINK);											//6			 73
WoolID my_wool_gray = createWool(COLOR_GRAY);											//7			 74
WoolID my_wool_light_gray = createWool(COLOR_LIGHT_GRAY);								//8			 75
WoolID my_wool_cyan = createWool(COLOR_CYAN);											//9			 76
WoolID my_wool_purple = createWool(COLOR_PURPLE);										//10		 77
WoolID my_wool_blue = createWool(COLOR_BLUE);											//11		 78
WoolID my_wool_brown = createWool(COLOR_BROWN);											//12		 79
WoolID my_wool_green = createWool(COLOR_GREEN);											//13		 80
WoolID my_wool_red = createWool(COLOR_RED);												//14		 81
WoolID my_wool_black = createWool(COLOR_BLACK);											//15		 82

WoodID my_wood_oak = createWood(WOOD_OAK, STRIP_UP_DOWN);								//0			 83
WoodID my_wood_spruce = createWood(WOOD_SPRUCE, STRIP_UP_DOWN);							//1			 84
WoodID my_wood_birch = createWood(WOOD_BIRCH, STRIP_UP_DOWN);							//2			 85
WoodID my_wood_jungle = createWood(WOOD_JUNGLE, STRIP_UP_DOWN);							//3			 86
WoodID my_wood_acacia = createWood(WOOD_ACACIA, STRIP_UP_DOWN);							//4			 87
WoodID my_wood_dark_oak = createWood(WOOD_DARK_OAK, STRIP_UP_DOWN);						//5			 88

FenceID my_fence_oak = createFence(FENCE_OAK);											//0			 89
FenceID my_fence_spruce = createFence(FENCE_SPRUCE);									//1			 90
FenceID my_fence_birch = createFence(FENCE_BIRCH);										//2			 91
FenceID my_fence_jungle = createFence(FENCE_JUNGLE);									//3			 92
FenceID my_fence_dark_oak = createFence(FENCE_DARK_OAK);								//4			 93
FenceID my_fence_acacia = createFence(FENCE_ACACIA);									//5			 94
FenceID my_fence_nether_brick = createFence(FENCE_NETHER_BRICK);						//6			 95

PaneID my_pane_glass = createPane(PANE_GLASS);											//0			 96
PaneID my_pane_iron = createPane(PANE_IRON);											//1			 97

BricksID my_brick = createBricks(BRICKS);												//0			 98
BricksID my_brick_stone = createBricks(BRICKS_STONE);									//1			 99
BricksID my_brick_cracked_stone = createBricks(BRICKS_CRACKED_STONE);					//2			100
BricksID my_brick_mossy_stone = createBricks(BRICKS_MOSSY_STONE);						//3			101
BricksID my_brick_chiseled_stone = createBricks(BRICKS_CHISELED_STONE);					//4			102
BricksID my_brick_nether = createBricks(BRICKS_NETHER);									//5			103
BricksID my_brick_red_nether = createBricks(BRICKS_RED_NETHER);							//6			104

PlanksID my_planks_oak = createPlanks(PLANKS_OAK);										//0			105
PlanksID my_planks_spruce = createPlanks(PLANKS_SPRUCE);								//1			106
PlanksID my_planks_birch = createPlanks(PLANKS_BIRCH);									//2			107
PlanksID my_planks_jungle = createPlanks(PLANKS_JUNGLE);								//3			108
PlanksID my_planks_acacia = createPlanks(PLANKS_ACACIA);								//4			109
PlanksID my_planks_dark_oak = createPlanks(PLANKS_DARK_OAK);							//5			110

PlantID my_plant_oak_sapling = createPlant(PLANT_OAK_SAPLING);							//0			111
PlantID my_plant_spruce_sapling = createPlant(PLANT_SPRUCE_SAPLING);					//1			112
PlantID my_plant_birch_sapling = createPlant(PLANT_BIRCH_SAPLING);						//2			113
PlantID my_plant_jungle_sapling = createPlant(PLANT_JUNGLE_SAPLING);					//3			114
PlantID my_plant_acacia_sapling = createPlant(PLANT_ACACIA_SAPLING);					//4			115
PlantID my_plant_dark_oak_sapling = createPlant(PLANT_DARK_OAK_SAPLING);				//5			116
PlantID my_plant_oak_leaves = createPlant(PLANT_OAK_LEAVES);							//6			117
PlantID my_plant_spruce_leaves = createPlant(PLANT_SPRUCE_LEAVES);						//7			118
PlantID my_plant_birch_leaves = createPlant(PLANT_BIRCH_LEAVES);						//8			119
PlantID my_plant_jungle_leaves = createPlant(PLANT_JUNGLE_LEAVES);						//9			120
PlantID my_plant_acacia_leaves = createPlant(PLANT_ACACIA_LEAVES);						//10		121
PlantID my_plant_dark_oak_leaves = createPlant(PLANT_DARK_OAK_LEAVES);					//11		122
PlantID my_plant_grass = createPlant(PLANT_GRASS);										//12		123
PlantID my_plant_dead_bush = createPlant(PLANT_DEAD_BUSH);								//13		124
PlantID my_plant_brown_mushroom_block = createPlant(PLANT_BROWN_MUSHROOM_BLOCK);		//14		125
PlantID my_plant_red_mushroom_block = createPlant(PLANT_RED_MUSHROOM_BLOCK);			//15		126
PlantID my_plant_wheat = createPlant(PLANT_WHEAT);										//16		127
PlantID my_plant_cactus = createPlant(PLANT_CACTUS);									//17		128
PlantID my_plant_sugar_cane = createPlant(PLANT_SUGAR_CANE);							//18		129
PlantID my_plant_brown_mushroom = createPlant(PLANT_BROWN_MUSHROOM);					//19		130
PlantID my_plant_red_mushroom = createPlant(PLANT_RED_MUSHROOM);						//20		131
PlantID my_plant_vines = createPlant(PLANT_VINES);										//21		132
PlantID my_plant_lily_pad = createPlant(PLANT_LILY_PAD);								//22		133
PlantID my_plant_carrot = createPlant(PLANT_CARROT);									//23		134
PlantID my_plant_potato = createPlant(PLANT_POTATO);									//24		135
PlantID my_plant_chorus = createPlant(PLANT_CHORUS);									//25		136

FlowerID my_flower_dandelion = createFlower(FLOWER_DANDELION);							//0			137
FlowerID my_flower_poppy = createFlower(FLOWER_POPPY);									//1			138
FlowerID my_flower_blue_orchid = createFlower(FLOWER_BLUE_ORCHID);						//2			139
FlowerID my_flower_allium = createFlower(FLOWER_ALLIUM);								//3			140
FlowerID my_flower_azure_bluet = createFlower(FLOWER_AZURE_BLUET);						//4			141
FlowerID my_flower_red_tulip = createFlower(FLOWER_RED_TULIP);							//5			142
FlowerID my_flower_orange_tulip = createFlower(FLOWER_ORANGE_TULIP);					//6			143
FlowerID my_flower_white_tulip = createFlower(FLOWER_WHITE_TULIP);						//7			144
FlowerID my_flower_pink_tulip = createFlower(FLOWER_PINK_TULIP);						//8			145
FlowerID my_flower_oxeye_tulip = createFlower(FLOWER_OXEYE_TULIP);						//9			146
FlowerID my_flower_sunflower = createFlower(FLOWER_SUNFLOWER);							//10		147
FlowerID my_flower_lilac = createFlower(FLOWER_LILAC);									//11		148
FlowerID my_flower_double_tallgrass = createFlower(FLOWER_DOUBLE_TALLGRASS);			//12		149
FlowerID my_flower_large_fern = createFlower(FLOWER_LARGE_FERN);						//13		150
FlowerID my_flower_rose_bush = createFlower(FLOWER_ROSE_BUSH);							//14		151
FlowerID my_flower_peony = createFlower(FLOWER_PEONY);									//15		152
FlowerID my_flower_chorus = createFlower(FLOWER_CHORUS);								//16		153

FlowerPotID my_flower_pot_empty = createFlowerPot(FLOWER_POT_EMPTY);					//0			154
FlowerPotID my_flower_pot_poppy = createFlowerPot(FLOWER_POT_POPPY);					//1			155
FlowerPotID my_flower_pot_dandelion = createFlowerPot(FLOWER_POT_DANDELION);			//2			156
FlowerPotID my_flower_pot_oak_sapling = createFlowerPot(FLOWER_POT_OAK_SAPLING);		//3			157
FlowerPotID my_flower_pot_spruce_sapling = createFlowerPot(FLOWER_POT_SPRUCE_SAPLING);	//4			158
FlowerPotID my_flower_pot_birch_sapling = createFlowerPot(FLOWER_POT_BIRCH_SAPLING);	//5			159
FlowerPotID my_flower_pot_jungle_sapling = createFlowerPot(FLOWER_POT_JUNGLE_SAPLING);	//6			160
FlowerPotID my_flower_pot_red_mushroom = createFlowerPot(FLOWER_POT_RED_MUSHROOM);		//7			161
FlowerPotID my_flower_pot_brown_mushroom = createFlowerPot(FLOWER_POT_BROWN_MUSHROOM);	//8			162
FlowerPotID my_flower_pot_cactus = createFlowerPot(FLOWER_POT_CACTUS);					//9			163
FlowerPotID my_flower_pot_dead_bush = createFlowerPot(FLOWER_POT_DEAD_BUSH);			//10		164
FlowerPotID my_flower_pot_fern = createFlowerPot(FLOWER_POT_FERN);						//11		165
FlowerPotID my_flower_pot_acacia = createFlowerPot(FLOWER_POT_ACACIA);					//12		166
FlowerPotID my_flower_pot_dark_oak = createFlowerPot(FLOWER_POT_DARK_OAK);				//13		167

MobID my_mob_stray = createMob(MOB_STRAY);												//0			168
MobID my_mob_husk = createMob(MOB_HUSK);												//1			169
MobID my_mob_zombie_villager = createMob(MOB_ZOMBIE_VILLAGER);							//2			170
MobID my_mob_evocation_illager = createMob(MOB_EVOCATION_ILLAGER);						//3			171
MobID my_mob_vex = createMob(MOB_VEX);													//4			172
MobID my_mob_vindication_illager = createMob(MOB_VINDICATION_ILLAGER);					//5			173
MobID my_mob_illusion_illager = createMob(MOB_ILLUSION_ILLAGER);						//6			174
MobID my_mob_creeper = createMob(MOB_CREEPER);											//7			175
MobID my_mob_skeleton = createMob(MOB_SKELETON);										//8			176
MobID my_mob_spider = createMob(MOB_SPIDER);											//9			177
MobID my_mob_giant = createMob(MOB_GIANT);												//10		178
MobID my_mob_zombie = createMob(MOB_ZOMBIE);											//11		179
MobID my_mob_slime = createMob(MOB_SLIME);												//12		180
MobID my_mob_ghast = createMob(MOB_GHAST);												//13		181
MobID my_mob_zombie_pigman = createMob(MOB_ZOMBIE_PIGMAN);								//14		182
MobID my_mob_enderman = createMob(MOB_ENDERMAN);										//15		183
MobID my_mob_cave_spider = createMob(MOB_CAVE_SPIDER);									//16		184
MobID my_mob_silverfish = createMob(MOB_SILVERFISH);									//17		185
MobID my_mob_blaze = createMob(MOB_BLAZE);												//18		186
MobID my_mob_magma_cube = createMob(MOB_MAGMA_CUBE);									//19		187
MobID my_mob_ender_dragon = createMob(MOB_ENDER_DRAGON);								//20		188
MobID my_mob_wither = createMob(MOB_WITHER);											//21		189
MobID my_mob_witch = createMob(MOB_WITCH);												//22		190
MobID my_mob_endermite = createMob(MOB_ENDERMITE);										//23		191
MobID my_mob_guardian = createMob(MOB_GUARDIAN);										//24		192
MobID my_mob_shulker = createMob(MOB_SHULKER);											//25		193
MobID my_mob_skeleton_horse = createMob(MOB_SKELETON_HORSE);							//26		194
MobID my_mob_zombie_horse = createMob(MOB_ZOMBIE_HORSE);								//27		195
MobID my_mob_donkey = createMob(MOB_DONKEY);											//28		196
MobID my_mob_mule = createMob(MOB_MULE);												//29		197
MobID my_mob_bat = createMob(MOB_BAT);													//30		198
MobID my_mob_pig = createMob(MOB_PIG);													//31		199
MobID my_mob_sheep = createMob(MOB_SHEEP);												//32		200
MobID my_mob_cow = createMob(MOB_COW);													//33		201
MobID my_mob_chicken = createMob(MOB_CHICKEN);											//34		202
MobID my_mob_squid = createMob(MOB_SQUID);												//35		203
MobID my_mob_wolf = createMob(MOB_WOLF);												//36		204
MobID my_mob_mooshroom = createMob(MOB_MOOSHROOM);										//37		205
MobID my_mob_snowman = createMob(MOB_SNOWMAN);											//38		206
MobID my_mob_ocelot = createMob(MOB_OCELOT);											//39		207
MobID my_mob_villager_golem = createMob(MOB_VILLAGER_GOLEM);							//40		208
MobID my_mob_horse = createMob(MOB_HORSE);												//41		209
MobID my_mob_rabbit = createMob(MOB_RABBIT);											//42		210
MobID my_mob_polar_bear = createMob(MOB_POLAR_BEAR);									//43		211
MobID my_mob_llama = createMob(MOB_LLAMA);												//44		212
MobID my_mob_parrot = createMob(MOB_PARROT);											//45		213
MobID my_mob_villager = createMob(MOB_VILLAGER);										//46		214
MobID my_mob_elder_guardian = createMob(MOB_ELDER_GUARDIAN);							//47		215
MobID my_mob_wither_skeleton = createMob(MOB_WITHER_SKELETON);							//48		216

BlockID block[60] = {
	//블록 변수
	my_air,									//0			  0
	my_stone,								//1			  1
	my_granite,								//2			  2
	my_polished_granite,					//3			  3
	my_diorite,								//4			  4
	my_polished_diorite,					//5			  5
	my_andesite,							//6			  6
	my_polished_andesite,					//7			  7
	my_grass,								//8			  8
	my_dirt,								//9			  9
	my_coarse_dirt,							//10		 10
	my_podzol,								//11		 11
	my_cobblestone,							//12		 12
	my_bedrock,								//13		 13
	my_sand,								//14		 14
	my_red_sand,							//15		 15
	my_gravel,								//16		 16
	my_glass,								//17		 17
	my_lapis_lazuli,						//18		 18
	my_sand_stone,							//19		 19
	my_chiseled_sand_stone,					//20		 20
	my_smooth_sand_stone,					//21		 21
	my_gold,								//22		 22
	my_iron,								//23		 23
	my_tnt,									//24		 24
	my_mossy_cobblestone,					//25		 25
	my_obsidian,							//26		 26
	my_diamond,								//27		 27
	my_clay,								//28		 28
	my_netherrack,							//29		 29
	my_soul_sand,							//30		 30
	my_glowstone,							//31		 31
	my_stained_glass,						//32		 32
	my_melon,								//33		 33
	my_mycelium,							//34		 34
	my_end_stone,							//35		 35
	my_emerald,								//36		 36
	my_nether_quartz,						//37		 37
	my_slime,								//38		 38
	my_prismarine,							//39		 39
	my_hey_bale,							//40		 40
	my_coal,								//41		 41
	my_red_sandstone,						//42		 42
	my_chiseled_red_santstone,				//43		 43
	my_smooth_red_sandstone,				//44		 44
	my_purpur,								//45		 45
	my_purpur_pillar,						//46		 46
	my_grass_path,							//47		 47
	my_magma,								//48		 48
	my_nether_wart,							//49		 49
	my_bone,								//50		 50
};

CarpetID carpet[20] = {
	//카펫 변수
	my_carpet_white,						//0			 51
	my_carpet_orange,						//1			 52
	my_carpet_magenta,						//2			 53
	my_carpet_light_blue,					//3			 54
	my_carpet_yellow,						//4			 55
	my_carpet_lime,							//5			 56
	my_carpet_pink,							//6			 57
	my_carpet_gray,							//7			 58
	my_carpet_light_gray,					//8			 59
	my_carpet_cyan,							//9			 60
	my_carpet_purple,						//10		 61
	my_carpet_blue,							//11		 62
	my_carpet_brown,						//12		 63
	my_carpet_green,						//13		 64
	my_carpet_red,							//14		 65
	my_carpet_black,						//15		 66
};

WoolID wool[20] = {
	//양털 변수
	my_wool_white,							//0			 67
	my_wool_orange,							//1			 68
	my_wool_magenta,						//2			 69
	my_wool_light_blue,						//3			 70
	my_wool_yellow,							//4			 71
	my_wool_lime,							//5			 72
	my_wool_pink,							//6			 73
	my_wool_gray,							//7			 74
	my_wool_light_gray,						//8			 75
	my_wool_cyan,							//9			 76
	my_wool_purple,							//10		 77
	my_wool_blue,							//11		 78
	my_wool_brown,							//12		 79
	my_wool_green,							//13		 80
	my_wool_red,							//14		 81
	my_wool_black,							//15		 82
};

WoodID wood[10] = {
	//나무 변수
	my_wood_oak,							//0			 83
	my_wood_spruce,							//1			 84
	my_wood_birch,							//2	 		 85
	my_wood_jungle,							//3	 		 86
	my_wood_acacia,							//4	 		 87
	my_wood_dark_oak,						//5	 		 88
};

FenceID fence[10] = {
	//울타리 변수
	my_fence_oak,							//0	 		 89
	my_fence_spruce,						//1	 		 90
	my_fence_birch,							//2	 		 91
	my_fence_jungle,						//3	 	   	 92
	my_fence_dark_oak,						//4			 93
	my_fence_acacia,						//5			 94
	my_fence_nether_brick,					//6			 95
};

PaneID pane[3] = {
	//유리, 철판 변수
	my_pane_glass,							//0			 96
	my_pane_iron,							//1			 97
};

BricksID brick[10] = {
	//브릭 변수
	my_brick,								//0			 98
	my_brick_stone,							//1			 99
	my_brick_cracked_stone,					//2			100
	my_brick_mossy_stone,					//3			101
	my_brick_chiseled_stone,				//4			102
	my_brick_nether,						//5			103
	my_brick_red_nether,					//6			104
};

PlanksID plank[10] = {
	//가공된 나무 블럭 변수
	my_planks_oak,							//0			105
	my_planks_spruce,						//1			106
	my_planks_birch,						//2			107
	my_planks_jungle,						//3			108
	my_planks_acacia,						//4			109
	my_planks_dark_oak,						//5			110
};

PlantID plant[30] = {
	//식물 변수
	my_plant_oak_sapling,					//0			111
	my_plant_spruce_sapling,				//1			112
	my_plant_birch_sapling,					//2			113
	my_plant_jungle_sapling,				//3			114
	my_plant_acacia_sapling,				//4			115
	my_plant_dark_oak_sapling,				//5			116
	my_plant_oak_leaves,					//6			117
	my_plant_spruce_leaves,					//7			118
	my_plant_birch_leaves,					//8			119
	my_plant_jungle_leaves,					//9			120
	my_plant_acacia_leaves,					//10		121
	my_plant_dark_oak_leaves,				//11		122
	my_plant_grass,							//12		123
	my_plant_dead_bush,						//13		124
	my_plant_brown_mushroom_block,			//14		125
	my_plant_red_mushroom_block,			//15		126
	my_plant_wheat,							//16		127
	my_plant_cactus,						//17		128
	my_plant_sugar_cane,					//18		129
	my_plant_brown_mushroom,				//19		130
	my_plant_red_mushroom,					//20		131
	my_plant_vines,							//21		132
	my_plant_lily_pad,						//22		133
	my_plant_carrot,						//23		134
	my_plant_potato,						//24		135
	my_plant_chorus,						//25		136
};

FlowerID flower[20] = {
	//꽃 변수
	my_flower_dandelion,					//0			137
	my_flower_poppy,						//1			138
	my_flower_blue_orchid,					//2			139
	my_flower_allium,						//3			140
	my_flower_azure_bluet,					//4			141
	my_flower_red_tulip,					//5			142
	my_flower_orange_tulip,					//6			143
	my_flower_white_tulip,					//7			144
	my_flower_pink_tulip,					//8			145
	my_flower_oxeye_tulip,					//9			146
	my_flower_sunflower,					//10		147
	my_flower_lilac,						//11		148
	my_flower_double_tallgrass,				//12		149
	my_flower_large_fern,					//13		150
	my_flower_rose_bush,					//14		151
	my_flower_peony,						//15		152
	my_flower_chorus,						//16		153
};

FlowerPotID flowerpot[15] = {
	//꽃받침 변수
	my_flower_pot_empty,					//0			154
	my_flower_pot_poppy,					//1			155
	my_flower_pot_dandelion,				//2			156
	my_flower_pot_oak_sapling,				//3			157
	my_flower_pot_spruce_sapling,			//4			158
	my_flower_pot_birch_sapling,			//5			159
	my_flower_pot_jungle_sapling,			//6			160
	my_flower_pot_red_mushroom,				//7			161
	my_flower_pot_brown_mushroom,			//8			162
	my_flower_pot_cactus,					//9			163
	my_flower_pot_dead_bush,				//10		164
	my_flower_pot_fern,						//11		165
	my_flower_pot_acacia,					//12		166
	my_flower_pot_dark_oak,					//13		167
};

MobID mob[50] = {
	//몹 변수
	my_mob_stray,							//0			168
	my_mob_husk,							//1			169
	my_mob_zombie_villager,					//2			170
	my_mob_evocation_illager,				//3			171
	my_mob_vex,								//4			172
	my_mob_vindication_illager,				//5			173
	my_mob_illusion_illager,				//6			174
	my_mob_creeper,							//7			175
	my_mob_skeleton,						//8			176
	my_mob_spider,							//9			177
	my_mob_giant,							//10		178
	my_mob_zombie,							//11		179
	my_mob_slime,							//12		180
	my_mob_ghast,							//13		181
	my_mob_zombie_pigman,					//14		182
	my_mob_enderman,						//15		183
	my_mob_cave_spider,						//16		184
	my_mob_silverfish,						//17		185
	my_mob_blaze,							//18		186
	my_mob_magma_cube,						//19		187
	my_mob_ender_dragon,					//20		188
	my_mob_wither,							//21		189
	my_mob_witch,							//22		190
	my_mob_endermite,						//23		191
	my_mob_guardian,						//24		192
	my_mob_shulker,							//25		193
	my_mob_skeleton_horse,					//26		194
	my_mob_zombie_horse,					//27		195
	my_mob_donkey,							//28		196
	my_mob_mule,							//29		197
	my_mob_bat,								//30		198
	my_mob_pig,								//31		199
	my_mob_sheep,							//32		200
	my_mob_cow,								//33		201
	my_mob_chicken,							//34		202
	my_mob_squid,							//35		203
	my_mob_wolf,							//36		204
	my_mob_mooshroom,						//37		205
	my_mob_snowman,							//38		206
	my_mob_ocelot,							//39		207
	my_mob_villager_golem,					//40		208
	my_mob_horse,							//41		209
	my_mob_rabbit,							//42		210
	my_mob_polar_bear,						//43		211
	my_mob_llama,							//44		212
	my_mob_parrot,							//45		213
	my_mob_villager,						//46		214
	my_mob_elder_guardian,					//47		215
	my_mob_wither_skeleton,					//48		216
};