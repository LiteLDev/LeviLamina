#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TeleportAnalysis : int {
    WontClip = 0,
    WillClip = 1,
    ChunksUnloaded = 2,
};
