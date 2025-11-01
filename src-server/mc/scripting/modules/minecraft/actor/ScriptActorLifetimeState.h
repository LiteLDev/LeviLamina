#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptActorLifetimeState : int {
    Instantiated = 0,
    Loading = 1,
    Loaded = 2,
    Removed = 3,
    Unloaded = 4,
};

}
