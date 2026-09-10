#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ShouldBounce : uchar {
    No              = 0,
    IfInvulnerable  = 1,
    IfNoDamageDealt = 2,
};
