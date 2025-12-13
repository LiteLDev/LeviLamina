#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SyncActorPropertyPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6fbb23;
    // NOLINTEND

public:
    // prevent constructor by default
    SyncActorPropertyPacketPayload& operator=(SyncActorPropertyPacketPayload const&);
    SyncActorPropertyPacketPayload(SyncActorPropertyPacketPayload const&);
    SyncActorPropertyPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SyncActorPropertyPacketPayload& operator=(::SyncActorPropertyPacketPayload&&);

    MCNAPI ~SyncActorPropertyPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
