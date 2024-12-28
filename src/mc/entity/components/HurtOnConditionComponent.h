#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HurtOnConditionComponent {
public:
    // prevent constructor by default
    HurtOnConditionComponent& operator=(HurtOnConditionComponent const&);
    HurtOnConditionComponent(HurtOnConditionComponent const&);
    HurtOnConditionComponent();
};
