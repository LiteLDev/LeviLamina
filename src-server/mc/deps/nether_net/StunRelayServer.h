#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct StunRelayServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdfbae8;
    ::ll::UntypedStorage<8, 32> mUnk177319;
    ::ll::UntypedStorage<8, 32> mUnk7bf918;
    // NOLINTEND

public:
    // prevent constructor by default
    StunRelayServer& operator=(StunRelayServer const&);
    StunRelayServer(StunRelayServer const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StunRelayServer();

    MCNAPI ~StunRelayServer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
