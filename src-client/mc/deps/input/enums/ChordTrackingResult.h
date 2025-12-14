#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ChordTrackingResult : uint {
    NotRelevant     = 0,
    IncompleteChord = 1,
    CompleteChord   = 2,
};
