#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

enum class UDPForwarderResult : int {
    ForwardingAlreadyExists = 0,
    NoSockets = 1,
    BindFailed = 2,
    InvalidParameters = 3,
    NotRunning = 4,
    Success = 5,
    ResultCount = 6,
};

}
