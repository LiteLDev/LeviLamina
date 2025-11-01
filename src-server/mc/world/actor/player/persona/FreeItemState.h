#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

struct FreeItemState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk16ca34;
    ::ll::UntypedStorage<1, 1> mUnkb06e99;
    ::ll::UntypedStorage<1, 1> mUnka2853a;
    // NOLINTEND

public:
    // prevent constructor by default
    FreeItemState& operator=(FreeItemState const&);
    FreeItemState(FreeItemState const&);
    FreeItemState();

};

}
