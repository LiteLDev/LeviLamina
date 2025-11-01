#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class WatchdogTerminateReason : int {
    Hang = 0,
    StackOverflow = 1,
};
