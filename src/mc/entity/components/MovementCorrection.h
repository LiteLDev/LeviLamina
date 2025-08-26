#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/components/CorrectionMethod.h"

/**
 * @struct MovementCorrection
 * @brief 移动修正指令结构体。
 *
 * 封装了一次移动修正的具体指令，包括修正的方法和目标位置。
 */
struct MovementCorrection {
public:
    // 成员变量
    // NOLINTBEGIN

    /**
     * @brief 修正的方法。
     * 
     * 类型为 CorrectionMethod 枚举。它指定了本次修正应采取的具体行动。
     * 这是整个指令的核心，决定了后面两个成员变量是否有意义。
     */
    ::ll::TypedStorage<1, 1, ::CorrectionMethod> mMethod;

    /**
     * @brief 接受的/修正后的位置。
     *
     * 一个三维向量（Vec3），代表服务器认可的权威位置。
     * 这个字段仅在 mMethod 为 CorrectClient 时有意义。
     * 它告诉客户端：“你现在必须移动到这个坐标。”
     */
    ::ll::TypedStorage<4, 12, ::Vec3>            mAcceptPosition;

    /**
     * @brief 新的偏差计数器。
     *
     * 一个无符号字符（uchar）。这个计数器可能用于追踪客户端和服务器状态连续出现偏差的次数。
     */
    ::ll::TypedStorage<1, 1, uchar>              mNewDivergenceCounter;
    
    // NOLINTEND
};
