#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerMovementSettings {
public:
    // prevent constructor by default
    PlayerMovementSettings& operator=(PlayerMovementSettings const&);
    PlayerMovementSettings(PlayerMovementSettings const&);
    PlayerMovementSettings();

public:
    // NOLINTBEGIN
    MCAPI static struct PlayerMovementSettings getDefault();

    MCAPI static struct PlayerMovementSettings const INVALID;

    // NOLINTEND
};
