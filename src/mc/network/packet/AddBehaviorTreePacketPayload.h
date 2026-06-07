#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AddBehaviorTreePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mJsonInput;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~AddBehaviorTreePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
