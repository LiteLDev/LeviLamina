#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct SessionDebugState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc70948;
    ::ll::UntypedStorage<8, 32> mUnk8f90dd;
    ::ll::UntypedStorage<8, 24> mUnk2ea3a8;
    ::ll::UntypedStorage<8, 24> mUnkab2eee;
    ::ll::UntypedStorage<8, 32> mUnk27640f;
    ::ll::UntypedStorage<8, 32> mUnkb5bd54;
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
