#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InstantDespawnComponent {

public:
    // prevent constructor by default
    InstantDespawnComponent& operator=(InstantDespawnComponent const&) = delete;
    InstantDespawnComponent(InstantDespawnComponent const&)            = delete;
    InstantDespawnComponent()                                          = delete;

public:
    /**
     * @symbol ?onDespawn\@InstantDespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDespawn(class Actor&); // NOLINT
    /**
     * @symbol ?tick\@InstantDespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&); // NOLINT
};
