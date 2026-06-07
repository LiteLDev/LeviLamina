#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct StunRelayServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk86c3e4;
    ::ll::UntypedStorage<8, 32> mUnkf37c87;
    ::ll::UntypedStorage<8, 32> mUnkc4c5ea;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRelayServer& operator=(StunRelayServer const&);
    StunRelayServer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunRelayServer(::NetherNet::StunRelayServer const&);

    MCNAPI ~StunRelayServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::StunRelayServer const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
