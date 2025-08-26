#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockActorType : int {
    Undefined             = 0,  // 未定义
    Furnace               = 1,  // 熔炉
    Chest                 = 2,  // 箱子
    NetherReactor         = 3,  // 下界反应堆
    Sign                  = 4,  // 告示牌
    MobSpawner            = 5,  // 刷怪笼
    Skull                 = 6,  // 头颅
    FlowerPot             = 7,  // 花盆
    BrewingStand          = 8,  // 酿造台
    EnchantingTable       = 9,  // 附魔台
    DaylightDetector      = 10, // 阳光探测器
    Music                 = 11, // 音符盒
    Comparator            = 12, // 红石比较器
    Dispenser             = 13, // 发射器
    Dropper               = 14, // 投掷器
    Hopper                = 15, // 漏斗
    Cauldron              = 16, // 炼药锅
    ItemFrame             = 17, // 物品展示框
    PistonArm             = 18, // 活塞臂
    MovingBlock           = 19, // 移动方块
    Chalkboard            = 20, // 黑板
    Beacon                = 21, // 信标
    EndPortal             = 22, // 末地传送门
    EnderChest            = 23, // 末影箱
    EndGateway            = 24, // 末地折跃门
    ShulkerBox            = 25, // 潜影盒
    CommandBlock          = 26, // 命令方块
    Bed                   = 27, // 床
    Banner                = 28, // 旗帜
    StructureBlock        = 32, // 结构方块
    Jukebox               = 33, // 唱片机
    ChemistryTable        = 34, // 化学实验台
    Conduit               = 35, // 潮涌核心
    JigsawBlock           = 36, // 拼图方块
    Lectern               = 37, // 讲台
    BlastFurnace          = 38, // 高炉
    Smoker                = 39, // 烟熏炉
    Bell                  = 40, // 钟
    Campfire              = 41, // 营火
    BarrelBlock           = 42, // 木桶
    Beehive               = 43, // 蜂箱
    Lodestone             = 44, // 磁石
    SculkSensor           = 45, //  Sculk 传感器
    SporeBlossom          = 46, // 孢子花
    GlowItemFrame         = 47, // 发光物品展示框
    SculkCatalyst         = 48, // Sculk 催化剂
    SculkShrieker         = 49, // Sculk 尖啸体
    HangingSign           = 50, // 悬挂式告示牌
    ChiseledBookshelf     = 51, // 雕纹书架
    BrushableBlock        = 52, // 可疑的方块
    DecoratedPot          = 53, // 饰纹陶罐
    CalibratedSculkSensor = 54, // 校频 Sculk 传感器
    Crafter               = 55, // 合成器
    TrialSpawner          = 56, // 试炼刷怪笼
    Vault                 = 57, // 宝库
    CreakingHeart         = 58,
    Count                 = 59, // 总数
};
