#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class GeneratorType : int {
    Legacy    = 0x0,       // 经典（遗留）模式
    Overworld = 0x1,       // 主世界
    Flat      = 0x2,       // 平坦世界
    Nether    = 0x3,       // 地狱世界
    TheEnd    = 0x4,       // 末地世界
    Void      = 0x5,       // 虚空世界
    Undefined = 0x6,       // 未定义
};
