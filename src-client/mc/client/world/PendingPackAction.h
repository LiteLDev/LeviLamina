#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/client/world/PackAction.h"
#include "mc/client/world/PackActionError.h"

namespace World {

struct PendingPackAction {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                            mPackIdVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPackName;
    ::ll::TypedStorage<8, 8, ::ContentType>                             mPackType;
    ::ll::TypedStorage<1, 1, ::World::PackAction>                       mPackActionType;
    ::ll::TypedStorage<1, 2, ::std::optional<::World::PackActionError>> mPackActionError;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PendingPackAction();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace World
