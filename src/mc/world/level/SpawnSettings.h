#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnSettings {
public:
    // prevent constructor by default
    SpawnSettings& operator=(SpawnSettings const&);
    SpawnSettings();

public:
    // NOLINTBEGIN
    MCAPI SpawnSettings(struct SpawnSettings const&);

    MCAPI ~SpawnSettings();

    // NOLINTEND
};
