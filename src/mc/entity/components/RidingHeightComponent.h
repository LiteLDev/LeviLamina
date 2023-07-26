#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RidingHeightComponent {

public:
    // prevent constructor by default
    RidingHeightComponent& operator=(RidingHeightComponent const&) = delete;
    RidingHeightComponent(RidingHeightComponent const&)            = delete;
    RidingHeightComponent()                                        = delete;
};
