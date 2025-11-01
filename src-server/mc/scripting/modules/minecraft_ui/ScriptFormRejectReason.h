#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftServerUI {

enum class ScriptFormRejectReason : int {
    ServerShutdown = 0,
    PlayerQuit = 1,
    MalformedResponse = 2,
};

}
