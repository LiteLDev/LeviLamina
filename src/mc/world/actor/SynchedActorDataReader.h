#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

class SynchedActorDataReader {
public:
    // prevent constructor by default
    SynchedActorDataReader& operator=(SynchedActorDataReader const&);
    SynchedActorDataReader(SynchedActorDataReader const&);
    SynchedActorDataReader();

public:
    // NOLINTBEGIN
    MCAPI class BlockPos getPosition(ushort id) const;

    MCAPI bool getStatusFlag(::ActorFlags flag) const;

    // NOLINTEND
};
