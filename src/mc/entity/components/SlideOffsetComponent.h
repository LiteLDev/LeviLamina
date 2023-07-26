#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlideOffsetComponent {

public:
    // prevent constructor by default
    SlideOffsetComponent& operator=(SlideOffsetComponent const&) = delete;
    SlideOffsetComponent(SlideOffsetComponent const&)            = delete;
    SlideOffsetComponent()                                       = delete;
};
