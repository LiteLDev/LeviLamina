#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonRpc {

class TurnConfigResult {
public:
    // TurnConfigResult inner types declare
    // clang-format off
    struct TurnAuthServer;
    // clang-format on

    // TurnConfigResult inner types define
    struct TurnAuthServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkeafb0b;
        ::ll::UntypedStorage<8, 32> mUnk6adfd9;
        ::ll::UntypedStorage<8, 24> mUnka4596c;
        // NOLINTEND

    public:
        // prevent constructor by default
        TurnAuthServer& operator=(TurnAuthServer const&);
        TurnAuthServer(TurnAuthServer const&);
        TurnAuthServer();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk44be47;
    ::ll::UntypedStorage<8, 24> mUnk2b2519;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnConfigResult& operator=(TurnConfigResult const&);
    TurnConfigResult(TurnConfigResult const&);
    TurnConfigResult();
};

} // namespace JsonRpc
