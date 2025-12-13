#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemoveObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk275635;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveObjectivePacketPayload& operator=(RemoveObjectivePacketPayload const&);
    RemoveObjectivePacketPayload(RemoveObjectivePacketPayload const&);
    RemoveObjectivePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::RemoveObjectivePacketPayload& operator=(::RemoveObjectivePacketPayload&&);

    MCNAPI ~RemoveObjectivePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
