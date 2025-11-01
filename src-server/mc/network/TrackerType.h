#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TrackerType : int {
    ClientPackets = 0,
    ServerPackets = 1,
    Xbox = 2,
    HttpMisc = 3,
    Count = 4,
};
