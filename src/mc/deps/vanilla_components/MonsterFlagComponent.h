#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MonsterFlagComponent {
public:
    // prevent constructor by default
    MonsterFlagComponent& operator=(MonsterFlagComponent const&);
    MonsterFlagComponent(MonsterFlagComponent const&);
    MonsterFlagComponent();
};
