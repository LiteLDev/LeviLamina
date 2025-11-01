#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptServerState : int {
    PreInit               = 0,
    ScriptLoaded          = 1,
    Finalized             = 2,
    ReloadingPreInit      = 3,
    ReloadingScriptLoaded = 4,
};

}
