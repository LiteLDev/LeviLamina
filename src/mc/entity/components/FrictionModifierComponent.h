#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FrictionModifierComponent {

public:
    // prevent constructor by default
    FrictionModifierComponent& operator=(FrictionModifierComponent const&) = delete;
    FrictionModifierComponent(FrictionModifierComponent const&)            = delete;
    FrictionModifierComponent()                                            = delete;
};
