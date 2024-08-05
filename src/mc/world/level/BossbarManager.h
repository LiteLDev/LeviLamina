#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BossbarManager {
public:
    // prevent constructor by default
    BossbarManager& operator=(BossbarManager const&);
    BossbarManager(BossbarManager const&);
    BossbarManager();

public:
    // NOLINTBEGIN
    MCAPI ~BossbarManager();

    // NOLINTEND
};
