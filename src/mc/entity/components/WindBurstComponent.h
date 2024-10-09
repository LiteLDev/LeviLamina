#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WindBurstComponent {
public:
    // prevent constructor by default
    WindBurstComponent& operator=(WindBurstComponent const&);
    WindBurstComponent(WindBurstComponent const&);
    WindBurstComponent();
};
