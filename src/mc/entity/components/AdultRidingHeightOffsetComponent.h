#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdultRidingHeightOffsetComponent {
public:
    // prevent constructor by default
    AdultRidingHeightOffsetComponent& operator=(AdultRidingHeightOffsetComponent const&);
    AdultRidingHeightOffsetComponent(AdultRidingHeightOffsetComponent const&);
    AdultRidingHeightOffsetComponent();

public:
    // NOLINTBEGIN
    MCAPI static float const SITTING_ANIMATION_OFFSET;

    // NOLINTEND
};
