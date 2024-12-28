#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSResolveState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk84a58e;
    ::ll::UntypedStorage<4, 4> mUnkce5238;
    ::ll::UntypedStorage<4, 4> mUnkd93fe1;
    // NOLINTEND

public:
    // prevent constructor by default
    JSResolveState& operator=(JSResolveState const&);
    JSResolveState(JSResolveState const&);
    JSResolveState();
};
