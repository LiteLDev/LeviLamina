#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameRuleId {
public:
    int value;

public:
    // NOLINTBEGIN
    MCAPI explicit GameRuleId(int value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(int value);

    // NOLINTEND
};
