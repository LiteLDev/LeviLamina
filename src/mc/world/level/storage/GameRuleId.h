#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct GameRuleId : public ::NewType<int> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GameRuleId(int value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(int value);
    // NOLINTEND
};
