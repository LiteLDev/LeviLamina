#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerTickConfig.h"
#include "mc/entity/components/ReplayStateConfig.h"

/**
 * @struct PlayerMovementSettings
 * @brief 玩家移动（及行为）设置。
 *
 * 这是一个聚合配置结构体，包含了控制玩家移动、交互和更新频率等多个方面的服务器权威设置。
 */
struct PlayerMovementSettings {
public:
    // 成员变量
    // NOLINTBEGIN

    /**
     * @brief 行为方向阈值。
     *
     * 一个浮点数值。可能用于判断玩家的交互行为（如攻击、放置方块）是否与其朝向足够一致。
     * 例如，如果玩家的视线与攻击方向的角度差超过这个阈值，服务器可能会判定该次攻击无效。
     * 这是一种反作弊措施，用于防止玩家进行不符合常规物理的“背后攻击”等。
     */
    ::ll::TypedStorage<4, 4, float>                ActionDirectionThreshold;

    /**
     * @brief 移动重放/修正系统的配置。
     *
     * 这里直接内嵌了一个 ReplayStateConfig 结构体。
     * 这意味着 PlayerMovementSettings 是 ReplayStateConfig 的“所有者”或“容器”。
     * 所有关于移动修正的参数（模式、阈值、历史大小等）都封装在这里。
     */
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig> mReplay;

    /**
     * @brief 玩家 Tick 配置。
     *
     * 内嵌了一个 PlayerTickConfig 结构体。
     * 这个配置可能控制着服务器处理玩家更新的频率和方式。例如，服务器每秒应该处理多少个来自该玩家的输入包，
     * 或者在一段时间内最多能处理多少次玩家的移动计算等。
     */
    ::ll::TypedStorage<8, 32, ::PlayerTickConfig>  mPlayerTickConfig;

    /**
     * @brief 服务器权威的方块破坏。
     *
     * 一个布尔开关。如果为 true，那么方块能否被成功破坏完全由服务器说了算。
     * 服务器会验证玩家是否在合法距离内、是否使用了正确的工具、破坏速度是否正常。
     * 这是防止“秒挖”、“远距离挖矿”等作弊行为的关键设置。
     * 如果为 false，则服务器可能更信任客户端的报告，这在单机或高信任度网络环境下可以减少延迟感。
     */
    ::ll::TypedStorage<1, 1, bool>                 ServerAuthBlockBreaking;

    /**
     * @brief 服务器端玩家选择/交互范围的缩放因子。
     *
     * 一个浮点数乘数（Scalar）。它用于调整玩家在服务器上的交互距离（通常称为 "reach" 或 "pick range"）。
     * 例如，如果基础交互距离是 5 格，而这个缩放因子是 1.2，那么玩家的有效交互距离就变成了 6 格。
     * 这可以用来统一调整服务器上所有玩家的交互范围，也是一个重要的反作弊参数。
     */
    ::ll::TypedStorage<4, 4, float>                mServerPlayerPickRangeScalar;
    
    // NOLINTEND

public:
    // 静态函数
    // NOLINTBEGIN

    /**
     * @brief 获取默认的玩家移动设置。
     * @return 一个包含了标准、默认值的 PlayerMovementSettings 实例。
     *
     * 这是一个工厂函数，用于创建一个“出厂设置”的 PlayerMovementSettings 对象。
     * 当服务器没有提供自定义配置时，游戏会使用这个默认值来保证基本功能正常。
     */
    MCAPI static ::PlayerMovementSettings getDefault();
    
    // NOLINTEND

public:
    // 静态变量
    // NOLINTBEGIN

    /**
     * @brief 获取一个表示“无效”的设置实例。
     * @return 一个对常量 PlayerMovementSettings 对象的引用，该对象代表无效或未初始化的状态。
     *
     * 这是一个哨兵值（Sentinel Value）。在某些函数需要返回 PlayerMovementSettings 但可能失败的情况下，
     * 可以返回这个特殊的 INVALID 实例的引用，调用方可以通过比较地址来检查返回是否有效，
     * 而无需使用指针或 std::optional，是一种高效的错误/无效状态表示方法。
     */
    MCAPI static ::PlayerMovementSettings const& INVALID();
    
    // NOLINTEND
};
