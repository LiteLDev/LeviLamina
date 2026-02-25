#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/PackCollection.h"

namespace World {

struct WorldPacksData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::World::PackCollection> resourcePack;
    ::ll::TypedStorage<8, 128, ::World::PackCollection> behaviorPack;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldPacksData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
