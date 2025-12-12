#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AddBehaviorTreePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk752b5e;
    // NOLINTEND

public:
    // prevent constructor by default
    AddBehaviorTreePacketPayload& operator=(AddBehaviorTreePacketPayload const&);
    AddBehaviorTreePacketPayload(AddBehaviorTreePacketPayload const&);
    AddBehaviorTreePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::AddBehaviorTreePacketPayload& operator=(::AddBehaviorTreePacketPayload&&);

    MCNAPI ~AddBehaviorTreePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
