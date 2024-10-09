#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

enum class LogCategory : int {
    LogArea          = 0x0,
    LogWorldGen      = 0x1,
    LogLoot          = 0x2,
    LogRender        = 0x3,
    LogStructure     = 0x4,
    LogUI            = 0x5,
    LogOnline        = 0x6,
    NumLogCategories = 0x7,
};

};
