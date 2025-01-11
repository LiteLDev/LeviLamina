#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockRandomTickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk493e16;
    ::ll::UntypedStorage<8, 16> mUnkbef75d;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRandomTickEvent& operator=(BlockRandomTickEvent const&);
    BlockRandomTickEvent(BlockRandomTickEvent const&);
    BlockRandomTickEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockRandomTickEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
