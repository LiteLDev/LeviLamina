#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorFlags.h"

class SynchedActorDataReader {
public:
    // prevent constructor by default
    SynchedActorDataReader& operator=(SynchedActorDataReader const&);
    SynchedActorDataReader(SynchedActorDataReader const&);
    SynchedActorDataReader();

public:
    // NOLINTBEGIN
    // symbol: ?getInt@SynchedActorDataReader@@QEBAHG@Z
    MCAPI int getInt(ushort) const;

    // symbol: ?getPosition@SynchedActorDataReader@@QEBA?AVBlockPos@@G@Z
    MCAPI class BlockPos getPosition(ushort) const;

    // symbol: ?getStatusFlag@SynchedActorDataReader@@QEBA_NW4ActorFlags@@@Z
    MCAPI bool getStatusFlag(::ActorFlags) const;

    // symbol: ?getVec3@SynchedActorDataReader@@QEBA?AVVec3@@G@Z
    MCAPI class Vec3 getVec3(ushort) const;

    // NOLINTEND
};
