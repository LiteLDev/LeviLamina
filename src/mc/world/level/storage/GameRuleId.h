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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
