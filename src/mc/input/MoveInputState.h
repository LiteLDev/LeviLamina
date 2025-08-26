#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

/**
 * @brief 存储和表示玩家移动输入的状态。
 *
 * 这个结构体聚合了所有与玩家移动相关的布尔标志和向量，
 * 例如方向键、跳跃、潜行等。它不包含任何逻辑，仅作为数据的容器。
 */
struct MoveInputState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mSneakDown;               // 潜行键是否被按下
    ::ll::TypedStorage<1, 1, bool>   mSneakToggleDown;         // 潜行切换键是否被按下
    ::ll::TypedStorage<1, 1, bool>   mWantDownSlow;            // 是否希望缓慢下降（如在脚手架上）
    ::ll::TypedStorage<1, 1, bool>   mWantUpSlow;              // 是否希望缓慢上升
    ::ll::TypedStorage<1, 1, bool>   mBlockSelectDown;         // 方块选择键是否按下（通常未使用）
    ::ll::TypedStorage<1, 1, bool>   mAscendBlock;             // 尝试在方块上攀爬（如脚手架）
    ::ll::TypedStorage<1, 1, bool>   mDescendBlock;            // 尝试在方块上降落
    ::ll::TypedStorage<1, 1, bool>   mJumpDown;                // 跳跃键是否被按下
    ::ll::TypedStorage<1, 1, bool>   mSprintDown;              // 冲刺键是否被按下
    ::ll::TypedStorage<1, 1, bool>   mUpLeft;                  // 是否向左上移动
    ::ll::TypedStorage<1, 1, bool>   mUpRight;                 // 是否向右上移动
    ::ll::TypedStorage<1, 1, bool>   mDownLeft;                // 是否向左下移动
    ::ll::TypedStorage<1, 1, bool>   mDownRight;               // 是否向右下移动
    ::ll::TypedStorage<1, 1, bool>   mUp;                      // 是否向前移动
    ::ll::TypedStorage<1, 1, bool>   mDown;                    // 是否向后移动
    ::ll::TypedStorage<1, 1, bool>   mLeft;                    // 是否向左移动
    ::ll::TypedStorage<1, 1, bool>   mRight;                   // 是否向右移动
    ::ll::TypedStorage<1, 1, bool>   mAscend;                  // 是否上升（飞行或游泳）
    ::ll::TypedStorage<1, 1, bool>   mDescend;                 // 是否下降（飞行或游泳）
    ::ll::TypedStorage<1, 1, bool>   mChangeHeight;            // 是否改变高度
    ::ll::TypedStorage<4, 8, ::Vec2> mAnalogMoveVector;        // 模拟摇杆的移动向量
    ::ll::TypedStorage<1, 1, bool>   mLookCenter;              // 视角是否居中（未使用）
    ::ll::TypedStorage<1, 1, uchar>  mLookSlightDirField;      // 轻微视角转动方向字段
    ::ll::TypedStorage<1, 1, uchar>  mLookNormalDirField;      // 正常视角转动方向字段
    ::ll::TypedStorage<1, 1, uchar>  mLookSmoothDirField;      // 平滑视角转动方向字段
    ::ll::TypedStorage<1, 1, bool>   mSneakInputCurrentlyDown; // 当前潜行输入是否按下（处理切换模式）
    ::ll::TypedStorage<1, 1, bool>   mSneakInputWasReleased;   // 在这一帧，潜行输入是否被释放
    ::ll::TypedStorage<1, 1, bool>   mSneakInputWasPressed;    // 在这一帧，潜行输入是否被按下
    ::ll::TypedStorage<1, 1, bool>   mJumpInputWasReleased;    // 在这一帧，跳跃输入是否被释放
    ::ll::TypedStorage<1, 1, bool>   mJumpInputWasPressed;     // 在这一帧，跳跃输入是否被按下
    ::ll::TypedStorage<1, 1, bool>   mJumpInputCurrentlyDown;  // 当前跳跃输入是否按下
    // NOLINTEND
};
