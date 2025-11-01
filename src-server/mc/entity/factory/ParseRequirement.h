#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ParseRequirement : int {
    None                 = 0,
    RequiresBaseGamePack = 1,
    UseBetaFeatures      = 2,
};
