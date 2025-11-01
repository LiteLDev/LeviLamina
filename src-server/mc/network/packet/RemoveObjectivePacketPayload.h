#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RemoveObjectivePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mObjectiveName;
    // NOLINTEND

public:
    // prevent constructor by default
    RemoveObjectivePacketPayload& operator=(RemoveObjectivePacketPayload const&);
    RemoveObjectivePacketPayload(RemoveObjectivePacketPayload const&);
    RemoveObjectivePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::RemoveObjectivePacketPayload& operator=(::RemoveObjectivePacketPayload&&);

    MCAPI ~RemoveObjectivePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
