#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AddBehaviorTreePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mJsonInput;
    // NOLINTEND

public:
    // prevent constructor by default
    AddBehaviorTreePacketPayload& operator=(AddBehaviorTreePacketPayload const&);
    AddBehaviorTreePacketPayload(AddBehaviorTreePacketPayload const&);
    AddBehaviorTreePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::AddBehaviorTreePacketPayload& operator=(::AddBehaviorTreePacketPayload&&);

    MCAPI ~AddBehaviorTreePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
