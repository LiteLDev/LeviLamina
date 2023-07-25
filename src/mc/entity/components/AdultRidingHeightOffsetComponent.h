#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdultRidingHeightOffsetComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ADULTRIDINGHEIGHTOFFSETCOMPONENT
public:
    AdultRidingHeightOffsetComponent& operator=(AdultRidingHeightOffsetComponent const&) = delete;
    AdultRidingHeightOffsetComponent(AdultRidingHeightOffsetComponent const&)            = delete;
    AdultRidingHeightOffsetComponent()                                                   = delete;
#endif

public:
    /**
     * @symbol ?SITTING_ANIMATION_OFFSET\@AdultRidingHeightOffsetComponent\@\@2MB
     */
    MCAPI static float const SITTING_ANIMATION_OFFSET;
};
