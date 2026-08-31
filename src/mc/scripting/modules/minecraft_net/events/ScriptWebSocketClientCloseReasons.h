#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraftNet {

enum class ScriptWebSocketClientCloseReasons : int {
    ClosedByServer           = 0,
    ClosedByClient           = 1,
    IncomingPayloadsTooLarge = 2,
};

}
