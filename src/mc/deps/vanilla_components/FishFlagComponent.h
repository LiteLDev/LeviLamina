#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FishFlagComponent {
public:
    // prevent constructor by default
    FishFlagComponent& operator=(FishFlagComponent const&);
    FishFlagComponent(FishFlagComponent const&);
    FishFlagComponent();
};
