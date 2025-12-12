#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DebugDrawerPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb52c1;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugDrawerPacketPayload& operator=(DebugDrawerPacketPayload const&);
    DebugDrawerPacketPayload(DebugDrawerPacketPayload const&);
    DebugDrawerPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::DebugDrawerPacketPayload& operator=(::DebugDrawerPacketPayload&&);

    MCNAPI ~DebugDrawerPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
