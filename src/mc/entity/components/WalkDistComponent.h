#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WalkDistComponent {

public:
    // prevent constructor by default
    WalkDistComponent& operator=(WalkDistComponent const&) = delete;
    WalkDistComponent(WalkDistComponent const&)            = delete;
    WalkDistComponent()                                    = delete;
};
