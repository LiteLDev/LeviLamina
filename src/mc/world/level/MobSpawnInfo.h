#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"

class MobSpawnInfo {
public:
    // prevent constructor by default
    MobSpawnInfo& operator=(MobSpawnInfo const&);
    MobSpawnInfo(MobSpawnInfo const&);
    MobSpawnInfo();

public:
    // NOLINTBEGIN
    // symbol: ?categoryID@MobSpawnInfo@@SAHW4ActorType@@@Z
    MCAPI static int categoryID(::ActorType category);

    // NOLINTEND
};
