#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PassengersChangedFlagComponent {
public:
    // prevent constructor by default
    PassengersChangedFlagComponent& operator=(PassengersChangedFlagComponent const&);
    PassengersChangedFlagComponent(PassengersChangedFlagComponent const&);
    PassengersChangedFlagComponent();
};
