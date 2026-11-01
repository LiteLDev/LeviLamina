#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

struct StunRelayServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mUri;
    ::ll::TypedStorage<8, 32, ::std::string> mUsername;
    ::ll::TypedStorage<8, 32, ::std::string> mPassword;
    // NOLINTEND

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
