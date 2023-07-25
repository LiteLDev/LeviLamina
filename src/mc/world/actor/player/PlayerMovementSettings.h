#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerMovementSettings {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTSETTINGS
public:
    PlayerMovementSettings& operator=(PlayerMovementSettings const&) = delete;
    PlayerMovementSettings(PlayerMovementSettings const&)            = delete;
    PlayerMovementSettings()                                         = delete;
#endif

public:
    /**
     * @symbol ?INVALID\@PlayerMovementSettings\@\@2U1\@B
     */
    MCAPI static struct PlayerMovementSettings const INVALID;
    /**
     * @symbol ?getDefault\@PlayerMovementSettings\@\@SA?AU1\@XZ
     */
    MCAPI static struct PlayerMovementSettings getDefault();
};
