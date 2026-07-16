#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct CreateRelayPortArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk520371;
    ::ll::UntypedStorage<8, 8>  mUnkaf486f;
    ::ll::UntypedStorage<8, 8>  mUnk791207;
    ::ll::UntypedStorage<8, 8>  mUnk620d6a;
    ::ll::UntypedStorage<8, 8>  mUnkb56cea;
    ::ll::UntypedStorage<8, 8>  mUnk4f5bb0;
    ::ll::UntypedStorage<8, 32> mUnkba7e18;
    ::ll::UntypedStorage<8, 32> mUnk67903d;
    ::ll::UntypedStorage<8, 8>  mUnka48e0a;
    ::ll::UntypedStorage<4, 4>  mUnk3759e9;
    ::ll::UntypedStorage<8, 8>  mUnk2052e0;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateRelayPortArgs& operator=(CreateRelayPortArgs const&);
    CreateRelayPortArgs(CreateRelayPortArgs const&);
    CreateRelayPortArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CreateRelayPortArgs();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
