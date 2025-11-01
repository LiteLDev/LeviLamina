#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StackSizeState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk4519be;
    ::ll::UntypedStorage<4, 4> mUnkedf810;
    ::ll::UntypedStorage<8, 8> mUnk97fe44;
    ::ll::UntypedStorage<8, 8> mUnkc20e74;
    ::ll::UntypedStorage<8, 8> mUnk539906;
    ::ll::UntypedStorage<4, 4> mUnk7ac9ca;
    ::ll::UntypedStorage<4, 4> mUnk2583b0;
    // NOLINTEND

public:
    // prevent constructor by default
    StackSizeState& operator=(StackSizeState const&);
    StackSizeState(StackSizeState const&);
    StackSizeState();

};
