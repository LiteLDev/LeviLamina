#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct StunRelayServer; }
// clang-format on

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
        ::ll::UntypedStorage<8, 32> mUnkf71799;
        ::ll::UntypedStorage<8, 32> mUnk7604a9;
        ::ll::UntypedStorage<8, 24> mUnkdf4d9c;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        TurnAuthServer& operator=(TurnAuthServer const&);
        TurnAuthServer(TurnAuthServer const&);
        TurnAuthServer();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::JsonRpc::TurnConfigResult::TurnAuthServer& operator=(::JsonRpc::TurnConfigResult::TurnAuthServer&&);
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk44be47;
    ::ll::UntypedStorage<8, 24> mUnk5f77e5;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnConfigResult& operator=(TurnConfigResult const&);
    TurnConfigResult(TurnConfigResult const&);
    TurnConfigResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::vector<::NetherNet::StunRelayServer> convertToRelayConfig();

    MCNAPI ~TurnConfigResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
