#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobSpawnInfo {

public:
    // prevent constructor by default
    MobSpawnInfo& operator=(MobSpawnInfo const&) = delete;
    MobSpawnInfo(MobSpawnInfo const&)            = delete;
    MobSpawnInfo()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?categoryID\@MobSpawnInfo\@\@SAHW4ActorType\@\@\@Z
     */
    MCAPI static int categoryID(enum class ActorType);
    // NOLINTEND
};
