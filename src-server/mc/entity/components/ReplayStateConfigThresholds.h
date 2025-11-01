#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ReplayStateConfigThresholds {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mPositionThreshold;
    ::ll::TypedStorage<4, 4, float> mPositionAcceptance;
    ::ll::TypedStorage<4, 4, float> mPositionPersuasion;
    // NOLINTEND

};
