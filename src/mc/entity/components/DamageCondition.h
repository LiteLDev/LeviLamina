#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DamageCondition {
public:
    // prevent constructor by default
    DamageCondition& operator=(DamageCondition const&);
    DamageCondition(DamageCondition const&);
    DamageCondition();

public:
    // NOLINTBEGIN
    MCAPI ~DamageCondition();

    // NOLINTEND
};
