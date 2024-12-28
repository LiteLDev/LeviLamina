#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SheepFlagComponent {
public:
    // prevent constructor by default
    SheepFlagComponent& operator=(SheepFlagComponent const&);
    SheepFlagComponent(SheepFlagComponent const&);
    SheepFlagComponent();
};
