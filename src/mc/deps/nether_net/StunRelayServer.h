#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct StunRelayServer {
public:
    // member variables
    std::string mUri;
    std::string mUsername;
    std::string mPassword;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~StunRelayServer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet
