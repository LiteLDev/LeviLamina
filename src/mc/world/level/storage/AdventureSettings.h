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
};
