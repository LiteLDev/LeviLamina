#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class EventResult : int {
    StopProcessing = 0x0,
    KeepGoing      = 0x1,
};
