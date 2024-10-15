#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameRuleId {
public:
    // prevent constructor by default
    GameRuleId& operator=(GameRuleId const&);
    GameRuleId(GameRuleId const&);
    GameRuleId();

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
