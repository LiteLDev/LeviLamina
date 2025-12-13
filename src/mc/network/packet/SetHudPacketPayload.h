#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetHudPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkadb395;
    ::ll::UntypedStorage<4, 4>  mUnkdd9d4b;
    // NOLINTEND

public:
    // prevent constructor by default
    SetHudPacketPayload& operator=(SetHudPacketPayload const&);
    SetHudPacketPayload(SetHudPacketPayload const&);
    SetHudPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SetHudPacketPayload& operator=(::SetHudPacketPayload&&);

    MCNAPI ~SetHudPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
