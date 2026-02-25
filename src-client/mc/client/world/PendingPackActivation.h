#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/WorldID.h"

namespace World {

struct PendingPackActivation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::World::WorldID> worldID;
    ::ll::TypedStorage<8, 8, ::ContentType>     contentType;
    ::ll::TypedStorage<8, 32, ::std::string>    packId;
    ::ll::TypedStorage<1, 1, bool>              isEduMode;
    ::ll::TypedStorage<1, 1, bool>              force;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PendingPackActivation();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
