#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SetDisplayObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6a2236;
    ::ll::UntypedStorage<8, 32> mUnk9ccaba;
    ::ll::UntypedStorage<8, 32> mUnk4196cc;
    ::ll::UntypedStorage<8, 32> mUnka7d931;
    ::ll::UntypedStorage<1, 1>  mUnk8e932c;
    // NOLINTEND

public:
    // prevent constructor by default
    SetDisplayObjectivePacketPayload(SetDisplayObjectivePacketPayload const&);
    SetDisplayObjectivePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SetDisplayObjectivePacketPayload& operator=(::SetDisplayObjectivePacketPayload&&);

    MCNAPI ::SetDisplayObjectivePacketPayload& operator=(::SetDisplayObjectivePacketPayload const&);

    MCNAPI ~SetDisplayObjectivePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
