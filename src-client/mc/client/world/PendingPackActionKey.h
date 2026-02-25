#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackAction.h"
#include "mc/client/world/WorldID.h"

namespace World {

struct PendingPackActionKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::World::WorldID>   mWorldID;
    ::ll::TypedStorage<1, 1, ::World::PackAction> mPackAction;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PendingPackActionKey();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
