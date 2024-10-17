#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

class MobSpawnInfo {
public:
    // prevent constructor by default
    MobSpawnInfo& operator=(MobSpawnInfo const&);
    MobSpawnInfo(MobSpawnInfo const&);
    MobSpawnInfo();

public:
    // NOLINTBEGIN
    MCAPI static int categoryID(::ActorType category);

    // NOLINTEND
};
