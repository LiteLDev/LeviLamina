#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionDebugState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb13ba0;
    ::ll::UntypedStorage<8, 32> mUnkf28068;
    ::ll::UntypedStorage<8, 24> mUnkaa0644;
    ::ll::UntypedStorage<8, 24> mUnkff8f6b;
    ::ll::UntypedStorage<8, 32> mUnk786e6d;
    ::ll::UntypedStorage<8, 32> mUnkc77687;
    // NOLINTEND

public:
    // prevent constructor by default
    SessionDebugState& operator=(SessionDebugState const&);
    SessionDebugState(SessionDebugState const&);
    SessionDebugState();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SessionDebugState();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
