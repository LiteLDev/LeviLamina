#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class DiscoveryEnvironment : int {
    Production = 0,
    Staging = 1,
    Dev = 2,
    Local = 3,
    Perf = 4,
    Count = 5,
};
