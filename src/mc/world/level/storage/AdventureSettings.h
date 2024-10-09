#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AdventureSettings {
public:
    // prevent constructor by default
    AdventureSettings& operator=(AdventureSettings const&);
    AdventureSettings(AdventureSettings const&);

public:
    // NOLINTBEGIN
    MCAPI AdventureSettings();

    // NOLINTEND
};
