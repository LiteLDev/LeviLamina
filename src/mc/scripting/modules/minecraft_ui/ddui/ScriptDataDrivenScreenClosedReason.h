#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

enum class ScriptDataDrivenScreenClosedReason : int {
    UserBusy     = 0,
    ClientClosed = 1,
    ServerClosed = 2,
    Invalid      = 3,
};

}
