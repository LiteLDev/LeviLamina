#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ParrotFlagComponent {
public:
    // prevent constructor by default
    ParrotFlagComponent& operator=(ParrotFlagComponent const&);
    ParrotFlagComponent(ParrotFlagComponent const&);
    ParrotFlagComponent();
};
