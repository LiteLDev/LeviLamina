#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class OutgoingPacketFilterResult : int {
    Allowed = 0,
    Reject  = 1,
};
