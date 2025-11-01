#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class IncomingPacketFilterResult : int {
    Allowed = 0,
    RejectedSilently = 1,
    RejectedWithDisconnect = 2,
};
