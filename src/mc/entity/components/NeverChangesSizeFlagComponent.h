#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct NeverChangesSizeFlagComponent {
public:
    // prevent constructor by default
    NeverChangesSizeFlagComponent& operator=(NeverChangesSizeFlagComponent const&);
    NeverChangesSizeFlagComponent(NeverChangesSizeFlagComponent const&);
    NeverChangesSizeFlagComponent();
};
