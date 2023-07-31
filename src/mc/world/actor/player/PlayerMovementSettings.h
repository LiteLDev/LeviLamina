#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerMovementSettings {

public:
    // prevent constructor by default
    PlayerMovementSettings& operator=(PlayerMovementSettings const&) = delete;
    PlayerMovementSettings(PlayerMovementSettings const&)            = delete;
    PlayerMovementSettings()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getDefault\@PlayerMovementSettings\@\@SA?AU1\@XZ
     */
    MCAPI static struct PlayerMovementSettings getDefault();
    /**
     * @symbol ?INVALID\@PlayerMovementSettings\@\@2U1\@B
     */
    MCAPI static struct PlayerMovementSettings const INVALID;
    // NOLINTEND
};
