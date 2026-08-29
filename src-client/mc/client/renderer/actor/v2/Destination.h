#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class Destination : int {
    Ignored    = 0,
    Constant   = 1,
    Expression = 2,
};
