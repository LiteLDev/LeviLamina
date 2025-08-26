#pragma once

#include "mc/_HeaderOutputPredefine.h"

// 代表推进一帧的结果
enum class AdvanceFrameResult : uchar {
    // 无变化
    NoChange       = 0,
    // 对象被修改
    ObjectModified = 1,
    // 未实现
    NotImplemented = 2,
};
