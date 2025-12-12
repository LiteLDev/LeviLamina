#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptTimeOfDay : int {
    Day      = 1000,
    Noon     = 6000,
    Sunset   = 12000,
    Night    = 13000,
    Midnight = 18000,
    Sunrise  = 23000,
};

}
