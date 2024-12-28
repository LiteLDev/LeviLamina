#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpiderFlagComponent {
public:
    // prevent constructor by default
    SpiderFlagComponent& operator=(SpiderFlagComponent const&);
    SpiderFlagComponent(SpiderFlagComponent const&);
    SpiderFlagComponent();
};
