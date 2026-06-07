#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemoveObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RemoveObjectivePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
