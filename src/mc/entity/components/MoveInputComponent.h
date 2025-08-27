#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/input/MoveInputState.h"

/**
 * @brief 实体（特别是玩家）的移动输入组件。
 *
 * 这个组件聚合了来自玩家的原始输入（MoveInputState），并将其处理成更高级的移动意图和状态。
 * 它是将玩家操作转换为实体在世界中实际移动的关键环节。
 */
struct MoveInputComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::MoveInputState>                       mInputState;                      // 处理后的输入状态，用于实际移动计算
    ::ll::TypedStorage<4, 40, ::MoveInputState>                       mRawInputState;                   // 来自硬件的原始输入状态，未经处理
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mHoldAutoJumpInWaterUntil;        // 在水中按住自动跳跃的截止时间点
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mMove;                            // 最终的二维移动向量（前/后，左/右）
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mLookDelta;                       // 视角的增量变化
    ::ll::TypedStorage<4, 8, ::Vec2>                                  mInteractDir;                     // 交互方向
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mDisplacement;                    // （未使用）位移
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mDisplacementDelta;               // （未使用）位移增量
    ::ll::TypedStorage<4, 12, ::Vec3>                                 mCameraOrientation;               // 相机朝向
    ::ll::TypedStorage<1, 1, bool>                                    mSneaking;                        // 当前是否处于潜行状态
    ::ll::TypedStorage<1, 1, bool>                                    mSprinting;                       // 当前是否处于冲刺状态
    ::ll::TypedStorage<1, 1, bool>                                    mWantUp;                          // 是否有向上的意图（例如跳跃，飞行）
    ::ll::TypedStorage<1, 1, bool>                                    mWantDown;                        // 是否有向下的意图（例如潜行，飞行）
    ::ll::TypedStorage<1, 1, bool>                                    mJumping;                         // 当前是否正在跳跃
    ::ll::TypedStorage<1, 1, bool>                                    mAutoJumpingInWater;              // 在水中是否自动跳跃
    ::ll::TypedStorage<1, 1, bool>                                    mMoveInputStateLocked;            // 移动输入状态是否被锁定（例如在UI界面中）
    ::ll::TypedStorage<1, 1, bool>                                    mPersistSneak;                    // 是否保持潜行状态
    ::ll::TypedStorage<1, 1, bool>                                    mAutoJumpEnabled;                 // 是否启用了自动跳跃
    ::ll::TypedStorage<1, 1, bool>                                    mIsCameraRelativeMovementEnabled; // 移动是否相对于相机方向
    ::ll::TypedStorage<1, 1, bool>                                    mIsRotControlledByMoveDirection;  // 旋转是否由移动方向控制
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>>                   mIsPaddling;                      // 是否正在划船 [左桨, 右桨]
    // NOLINTEND

public:
    // prevent constructor by default
    MoveInputComponent(MoveInputComponent const&);
    MoveInputComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::MoveInputComponent& operator=(::MoveInputComponent&&);

    MCAPI ::MoveInputComponent& operator=(::MoveInputComponent const&);
    // NOLINTEND
};
