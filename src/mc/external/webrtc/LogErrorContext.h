#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

enum class LogErrorContext : int {
    // bitfield representation
    None    = 0,
    Errno   = 1 << 0,
    En      = 1 << 0,
    Hresult = 1 << 1,
    Hr      = 1 << 1,
};

}
