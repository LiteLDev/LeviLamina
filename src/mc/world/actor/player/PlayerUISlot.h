#pragma once

#include "mc/_HeaderOutputPredefine.h"

/**
 * @enum PlayerUISlot
 * @brief 定义了玩家用户界面（UI）中各种具有特殊功能的槽位。
 *
 * 这个枚举为游戏中的各种交互界面（如工作台、铁砧、熔炉等）中的特定输入、输出或材料槽位
 * 提供了一个统一且类型安全的标识符。它主要用于网络通信（例如 ItemStackRequestPacket）和
 * 服务器端的物品栏逻辑，以精确地识别玩家正在与哪个特定功能的槽位进行交互，
 * 而不是依赖于普通的物品栏索引。
 */
enum class PlayerUISlot : int {
    // 鼠标/光标上选中的物品。这不代表一个真实的容器槽位，
    // 而是指玩家用鼠标抓取并正在“拿着”的那个物品堆叠。
    CursorSelected = 0,

    // --- 铁砧 (Anvil) ---
    AnvilInput    = 1, // 铁砧的第一个槽位，用于放置要修复或附魔的物品。
    AnvilMaterial = 2, // 铁砧的第二个槽位，用于放置修复材料或附魔书。

    // --- 切石机 (Stonecutter) ---
    StoneCutterInput = 3, // 切石机的输入槽位。

    // --- 村民交易 (Villager Trading) ---
    Trade2Ingredient1 = 4, // 需要两种材料的交易的第一个输入槽。
    Trade2Ingredient2 = 5, // 需要两种材料的交易的第二个输入槽。
    TradeIngredient1  = 6, // 交易的第一个输入槽。
    TradeIngredient2  = 7, // 交易的第二个输入槽（对于某些交易）。

    // --- 元素分解器 (Material Reducer - 教育版) ---
    MaterialReducerInput = 8, // 元素分解器的输入槽位。

    // --- 织布机 (Loom) ---
    LoomInput    = 9,  // 织布机中放置旗帜的槽位。
    LoomDye      = 10, // 织布机中放置染料的槽位。
    LoomMaterial = 11, // 织布机中放置旗帜图案的槽位。

    // --- 制图台 (Cartography Table) ---
    CartographyInput      = 12, // 制图台中放置地图的槽位。
    CartographyAdditional = 13, // 制图台中放置纸或玻璃板的槽位。

    // --- 附魔台 (Enchanting Table) ---
    EnchantingInput    = 14, // 附魔台中放置待附魔物品的槽位。
    EnchantingMaterial = 15, // 附魔台中放置青金石的槽位。

    // --- 砂轮 (Grindstone) ---
    GrindstoneInput      = 16, // 砂轮的第一个输入槽位。
    GrindstoneAdditional = 17, // 砂轮的第二个输入槽位。

    // --- 化合物创建器 (Compound Creator - 教育版) ---
    CompoundCreatorInput1 = 18, // 化合物创建器的 3x3 输入格的槽位 (1-9)。
    CompoundCreatorInput2 = 19,
    CompoundCreatorInput3 = 20,
    CompoundCreatorInput4 = 21,
    CompoundCreatorInput5 = 22,
    CompoundCreatorInput6 = 23,
    CompoundCreatorInput7 = 24,
    CompoundCreatorInput8 = 25,
    CompoundCreatorInput9 = 26,

    // --- 信标 (Beacon) ---
    BeaconPayment = 27, // 信标中放置矿物（铁锭、金锭等）的槽位。

    // --- 2x2 合成 (玩家物品栏) ---
    Crafting2x2Input1 = 28, // 玩家物品栏 2x2 合成格的槽位 (1-4)。
    Crafting2x2Input2 = 29,
    Crafting2x2Input3 = 30,
    Crafting2x2Input4 = 31,

    // --- 3x3 合成 (工作台) ---
    Crafting3x3Input1 = 32, // 工作台 3x3 合成格的槽位 (1-9)。
    Crafting3x3Input2 = 33,
    Crafting3x3Input3 = 34,
    Crafting3x3Input4 = 35,
    Crafting3x3Input5 = 36,
    Crafting3x3Input6 = 37,
    Crafting3x3Input7 = 38,
    Crafting3x3Input8 = 39,
    Crafting3x3Input9 = 40,

    // --- 元素分解器输出 (Material Reducer Output - 教育版) ---
    MaterialReducerOutput1 = 41, // 元素分解器的输出槽位 (1-9)。
    MaterialReducerOutput2 = 42,
    MaterialReducerOutput3 = 43,
    MaterialReducerOutput4 = 44,
    MaterialReducerOutput5 = 45,
    MaterialReducerOutput6 = 46,
    MaterialReducerOutput7 = 47,
    MaterialReducerOutput8 = 48,
    MaterialReducerOutput9 = 49,

    // --- 通用输出槽 ---
    CreatedItemOutput = 50, // 各种界面（工作台、熔炉、铁砧等）的成品输出槽。

    // --- 锻造台 (Smithing Table) ---
    SmithingTableInput    = 51, // 锻造台中放置装备的槽位。
    SmithingTableMaterial = 52, // 锻造台中放置升级材料（如狱髓锭）的槽位。
    SmithingTableTemplate = 53, // 锻造台中放置锻造模板的槽位。

    // --- 计数器 ---
    // 这个成员本身不是一个有效的槽位ID。
    // 它的值等于枚举成员的总数，常用于确定数组大小或循环边界。
    Count = 54,
};
