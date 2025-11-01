#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

enum class LogCategory : int {
    LogArea          = 0,
    LogWorldGen      = 1,
    LogLoot          = 2,
    LogRender        = 3,
    LogStructure     = 4,
    LogUI            = 5,
    LogOnline        = 6,
    NumLogCategories = 7,
};

}
