#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CorrectionMethod : uchar {
    /**
     * @brief 无需修正 (None = 0)
     *
     * 这是默认状态。表示客户端的位置在可接受的误差范围内，一切正常，不需要做任何事。
     * 当 ServerCorrectionPolicy::shouldCorrectMovement 返回一个 mMethod 为 None 的 MovementCorrection 对象时，就意味着“放行”。
     */
    None          = 0,

    /**
     * @brief 接受客户端的位置 (AcceptClient = 1)
     *
     * 这个状态比较特殊。它表示服务器决定接受客户端报告的位置，并更新自己的权威状态来匹配客户端。
     * 这种情况可能发生在一些特殊场景下，例如服务器侧的预测逻辑出现错误，或者在某些非关键物理交互中，为了平滑而选择相信客户端。
     * 这是一种“服务器向客户端同步”的情况。
     */
    AcceptClient  = 1,

    /**
     * @brief 修正客户端的位置 (CorrectClient = 2)
     *
     * 这是最常见的修正状态，也就是我们常说的“拉回”或“橡皮筋效应”。
     * 它表示服务器断定客户端的位置是错误的，并命令客户端必须同步到服务器的权威位置。
     * 当这个指令发出时，MovementCorrection 结构体中的 mAcceptPosition 字段就会包含那个权威位置。
     */
    CorrectClient = 2,
};