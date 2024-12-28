#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptBlockCustomComponentEventTypes : ushort {
    OnStepOn            = 0,
    OnRandomTick        = 1,
    OnEntityFallOn      = 2,
    OnTick              = 3,
    OnStepOff           = 4,
    OnPlayerInteract    = 5,
    OnPlayerDestroy     = 6,
    OnPlace             = 7,
    BeforeOnPlayerPlace = 8,
    Count               = 9,
};

}
