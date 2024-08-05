#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AbilitiesRequestComponent {
public:
    // prevent constructor by default
    AbilitiesRequestComponent& operator=(AbilitiesRequestComponent const&);
    AbilitiesRequestComponent(AbilitiesRequestComponent const&);
    AbilitiesRequestComponent();

public:
    // NOLINTBEGIN
    MCAPI struct AbilitiesRequestComponent& operator=(struct AbilitiesRequestComponent&&);

    // NOLINTEND
};
