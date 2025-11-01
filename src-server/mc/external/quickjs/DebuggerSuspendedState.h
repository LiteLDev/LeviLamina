#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DebuggerSuspendedState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk5866d5;
    ::ll::UntypedStorage<8, 16> mUnkc3f85b;
    ::ll::UntypedStorage<8, 16> mUnk4efc88;
    ::ll::UntypedStorage<8, 16> mUnk92e32b;
    ::ll::UntypedStorage<8, 8>  mUnke9ebf9;
    // NOLINTEND

public:
    // prevent constructor by default
    DebuggerSuspendedState& operator=(DebuggerSuspendedState const&);
    DebuggerSuspendedState(DebuggerSuspendedState const&);
    DebuggerSuspendedState();
};
