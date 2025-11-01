#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class KeyFrameTransformPrePostSplitState : uint64 {
    Auto = 0,
    Single = 1,
    ForcedSplit = 2,
    Count = 3,
};
