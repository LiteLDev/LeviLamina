#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"

struct SyncActorPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag> mPropertyData;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncActorPropertyPacketPayload& operator=(SyncActorPropertyPacketPayload const&);
    SyncActorPropertyPacketPayload(SyncActorPropertyPacketPayload const&);
    SyncActorPropertyPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::SyncActorPropertyPacketPayload& operator=(::SyncActorPropertyPacketPayload&&);

    MCAPI ~SyncActorPropertyPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
