#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class Level;
// clang-format on

class WanderingTraderScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    ::ll::TypedStorage<8, 8, uint64>          mTickToCheckIfSpawning;
    ::ll::TypedStorage<1, 1, bool>            mSpawnWanderingTrader;
    ::ll::TypedStorage<4, 4, int>             mDaysSinceLastSpawn;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mWanderingTraderUUID;
    // NOLINTEND

public:
    // prevent constructor by default
    WanderingTraderScheduler& operator=(WanderingTraderScheduler const&);
    WanderingTraderScheduler(WanderingTraderScheduler const&);
    WanderingTraderScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tick();
    // NOLINTEND
};
