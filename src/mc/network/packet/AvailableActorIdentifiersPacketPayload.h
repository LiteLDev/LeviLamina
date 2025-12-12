#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AvailableActorIdentifiersPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb385d;
    // NOLINTEND

public:
    // prevent constructor by default
    AvailableActorIdentifiersPacketPayload& operator=(AvailableActorIdentifiersPacketPayload const&);
    AvailableActorIdentifiersPacketPayload(AvailableActorIdentifiersPacketPayload const&);
    AvailableActorIdentifiersPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~AvailableActorIdentifiersPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
