#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PlayerAuthInputPacket;
struct MoveInputComponent;
struct TickingSystemWithInfo;
// clang-format on

/**
 * @struct ServerMoveInputHandlerSystem
 * @brief 服务器移动输入处理系统。
 *
 * 这是一个无状态的系统（结构体中没有成员变量），它只包含静态函数。
 * 它的功能是处理从客户端收到的移动输入包，并更新玩家实体的移动输入组件。
 */
struct ServerMoveInputHandlerSystem {
public:
    // 静态函数
    // NOLINTBEGIN

    /**
     * @brief 创建系统实例。
     * @return 一个 TickingSystemWithInfo 对象，代表了被创建和配置好的系统。
     *
     * 这是一个工厂函数，用于在游戏启动时创建 ServerMoveInputHandlerSystem。
     * 在 ECS 框架中，系统通常不是直接实例化的，而是通过这样的工厂函数注册到主循环中。
     * 返回的 TickingSystemWithInfo 对象可能包含了该系统的更新时机（例如，在物理更新之前）、
     * 它所依赖的组件（例如，它需要处理同时拥有 Player 和 MoveInputComponent 的实体）等元信息。
     */
    MCAPI static ::TickingSystemWithInfo create();

    /**
     * @brief 解析玩家输入包。
     * @param input 一个对 MoveInputComponent 的引用，该组件将被填充或更新。
     * @param packet 一个对收到的 PlayerAuthInputPacket 的常量引用，这是数据源。
     *
     * 这是该系统的核心逻辑所在。
     * 对于每个收到的玩家输入包，这个函数会被调用。它会：
     * 1. 读取 packet 中的数据，例如方向输入 (w,a,s,d)、跳跃、潜行、疾跑等按键状态。
     * 2. 将这些原始输入转换为标准化的移动向量或状态标志。
     * 3. 将这些处理过的数据写入到传入的 input (MoveInputComponent) 组件中。
     *
     * 这样，后续的系统就不再需要关心 PlayerAuthInputPacket 的复杂结构，
     * 只需从 MoveInputComponent 中读取简单的移动意图即可。
     */
    MCAPI static void digestPlayerInputPacket(::MoveInputComponent& input, ::PlayerAuthInputPacket const& packet);
    
    // NOLINTEND
};