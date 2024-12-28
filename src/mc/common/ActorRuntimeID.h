#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorRuntimeID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> rawID;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorRuntimeID& operator=(ActorRuntimeID const&);
    ActorRuntimeID(ActorRuntimeID const&);
    ActorRuntimeID();
};
