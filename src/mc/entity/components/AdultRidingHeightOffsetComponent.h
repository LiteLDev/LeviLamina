#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdultRidingHeightOffsetComponent {

public:
    // prevent constructor by default
    AdultRidingHeightOffsetComponent& operator=(AdultRidingHeightOffsetComponent const&) = delete;
    AdultRidingHeightOffsetComponent(AdultRidingHeightOffsetComponent const&)            = delete;
    AdultRidingHeightOffsetComponent()                                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?SITTING_ANIMATION_OFFSET\@AdultRidingHeightOffsetComponent\@\@2MB
     */
    MCAPI static float const SITTING_ANIMATION_OFFSET;
    // NOLINTEND
};
