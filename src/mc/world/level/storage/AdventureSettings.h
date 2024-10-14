#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {
public:
    bool mNoPvM;
    bool mNoMvP;
    bool mImmutableWorld;
    bool mShowNameTags;
    bool mAutoJump;

public:
    // NOLINTBEGIN
    MCAPI AdventureSettings();

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
