#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"

/**
 * @struct ServerPlayerCurrentMovementComponent
 * @brief 服务器端玩家当前移动信息组件。
 *
 * 这是一个数据组件，用于在服务器处理玩家单次移动更新时，临时聚合所有相关信息。
 * 它包含了来自客户端的原始输入包，以及玩家在应用此移动前的旧状态。
 */
struct ServerPlayerCurrentMovementComponent {
public:
    // 成员变量
    // NOLINTBEGIN

    /**
     * @brief 当前正在处理的更新包。
     *
     * 存储了从客户端接收到的完整的 PlayerAuthInputPacket。
     * 这个包里包含了玩家的意图：目标位置、旋转、按键状态（跳跃、潜行等）、输入模式等。
     * 这是服务器进行移动验证和模拟的主要数据来源。
     */
    ::ll::TypedStorage<8, 224, ::PlayerAuthInputPacket> mCurrentUpdate;

    /**
     * @brief 玩家的旧位置。
     *
     * 存储了在应用 mCurrentUpdate 包中的移动之前，玩家在服务器上的位置。
     * 这对于计算位移、检测速度以及与服务器模拟结果进行比较至关重要。
     */
    ::ll::TypedStorage<4, 12, ::Vec3>                   mOldPosition;

    /**
     * @brief 玩家之前的旋转。
     *
     * 存储了在应用 mCurrentUpdate 包中的旋转之前，玩家的朝向（俯仰角和偏航角）。
     * 用于计算旋转变化量。
     */
    ::ll::TypedStorage<4, 8, ::Vec2>                    mPrevRotation;

    /**
     * @brief 玩家的新旋转。
     *
     * 存储了从 mCurrentUpdate 包中解析出的玩家目标旋转。
     * 将 mPrevRotation 和 mNewRotation 进行比较，可以验证旋转速度是否合法。
     */
    ::ll::TypedStorage<4, 8, ::Vec2>                    mNewRotation;

    /**
     * @brief 是否应为潜行状态进行修正。
     *
     * 一个布尔标志，指示本次移动处理是否需要特别关注潜行状态的变化。
     * 玩家的潜行状态会改变其碰撞箱（hitbox）的大小。如果客户端和服务器对于玩家是否在潜行状态的认知不一致，
     * 可能会导致玩家在客户端能通过一个 1.5 格高的缝隙，但在服务器端却被卡住。
     * 这个标志可能用于触发对这种情况的特殊检查和修正。
     */
    ::ll::TypedStorage<1, 1, bool>                      mShouldCorrectForSneaking;
    
    // NOLINTEND
};