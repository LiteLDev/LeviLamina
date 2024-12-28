#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChestBlockTryPairEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkee25a3;
    ::ll::UntypedStorage<4, 12> mUnke8446d;
    ::ll::UntypedStorage<4, 12> mUnkc7c55b;
    // NOLINTEND

public:
    // prevent constructor by default
    ChestBlockTryPairEvent& operator=(ChestBlockTryPairEvent const&);
    ChestBlockTryPairEvent(ChestBlockTryPairEvent const&);
    ChestBlockTryPairEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChestBlockTryPairEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
