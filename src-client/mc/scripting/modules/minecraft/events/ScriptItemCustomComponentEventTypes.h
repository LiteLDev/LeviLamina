#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptItemCustomComponentEventTypes : ushort {
    CompleteUse            = 0,
    Consume                = 1,
    HitEntity              = 2,
    MineBlock              = 3,
    Use                    = 4,
    UseOn                  = 5,
    BeforeDurabilityDamage = 6,
    Count                  = 7,
};

}
