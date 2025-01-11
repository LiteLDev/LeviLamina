#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFlags.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class SynchedActorDataReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk27686e;
    ::ll::UntypedStorage<8, 8> mUnkada985;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchedActorDataReader& operator=(SynchedActorDataReader const&);
    SynchedActorDataReader(SynchedActorDataReader const&);
    SynchedActorDataReader();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::BlockPos getPosition(ushort id) const;

    MCAPI bool getStatusFlag(::ActorFlags flag) const;
    // NOLINTEND
};
