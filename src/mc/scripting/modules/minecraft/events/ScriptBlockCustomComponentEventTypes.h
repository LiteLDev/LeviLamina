#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

enum class ScriptBlockCustomComponentEventTypes : ushort {
    OnStepOn            = 0,
    OnRandomTick        = 1,
    OnRandomTickLegacy  = 2,
    OnEntityFallOn      = 3,
    OnTick              = 4,
    OnStepOff           = 5,
    OnPlayerInteract    = 6,
    OnPlayerDestroy     = 7,
    OnPlace             = 8,
    BeforeOnPlayerPlace = 9,
    Count               = 10,
};

}
