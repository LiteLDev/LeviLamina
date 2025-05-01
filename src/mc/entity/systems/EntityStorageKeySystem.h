#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"

class EntityStorageKeySystem : public ::ISystem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityStorageKeySystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string generateStorageKey(int64 actorId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
