#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InstantDespawnComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSTANTDESPAWNCOMPONENT
public:
    InstantDespawnComponent& operator=(InstantDespawnComponent const&) = delete;
    InstantDespawnComponent(InstantDespawnComponent const&)            = delete;
    InstantDespawnComponent()                                          = delete;
#endif

public:
    /**
     * @symbol ?onDespawn\@InstantDespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void onDespawn(class Actor&);
    /**
     * @symbol ?tick\@InstantDespawnComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void tick(class Actor&);
};
