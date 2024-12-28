#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SendEventStage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkc2c40b;
    ::ll::UntypedStorage<8, 32> mUnkd6b0fc;
    ::ll::UntypedStorage<4, 4>  mUnk6ab1de;
    // NOLINTEND

public:
    // prevent constructor by default
    SendEventStage& operator=(SendEventStage const&);
    SendEventStage(SendEventStage const&);
    SendEventStage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SendEventStage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
