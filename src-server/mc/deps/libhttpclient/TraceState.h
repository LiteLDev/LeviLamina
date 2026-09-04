#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TraceState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk623dd3;
    ::ll::UntypedStorage<4, 4>  mUnk100517;
    ::ll::UntypedStorage<8, 8>  mUnkaca574;
    ::ll::UntypedStorage<1, 1>  mUnk3ff743;
    ::ll::UntypedStorage<1, 1>  mUnk659843;
    // NOLINTEND

public:
    // prevent constructor by default
    TraceState& operator=(TraceState const&);
    TraceState(TraceState const&);
    TraceState();
};
