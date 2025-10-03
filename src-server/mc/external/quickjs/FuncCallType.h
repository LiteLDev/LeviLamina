#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FuncCallType : int {
    Normal    = 0,
    New       = 1,
    SuperCtor = 2,
    Template  = 3,
};
