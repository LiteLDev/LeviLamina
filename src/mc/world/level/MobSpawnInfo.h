#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobSpawnInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBSPAWNINFO
public:
    MobSpawnInfo& operator=(MobSpawnInfo const&) = delete;
    MobSpawnInfo(MobSpawnInfo const&)            = delete;
    MobSpawnInfo()                               = delete;
#endif

public:
    /**
     * @symbol ?categoryID\@MobSpawnInfo\@\@SAHW4ActorType\@\@\@Z
     */
    MCAPI static int categoryID(enum class ActorType);
};
