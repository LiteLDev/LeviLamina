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
    StunRelayServer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StunRelayServer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
