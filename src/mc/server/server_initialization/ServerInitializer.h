#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/server_initialization/IServerInitializer.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
namespace ServerInitialization { struct ServerInitResult; }
// clang-format on

namespace ServerInitialization {

class ServerInitializer : public ::ServerInitialization::IServerInitializer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 336> mUnk60f6f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerInitializer& operator=(ServerInitializer const&);
    ServerInitializer(ServerInitializer const&);
    ServerInitializer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::ServerInitialization::ServerInitResult
    completeWithResult(bool initialized, ::std::shared_ptr<::ServerNetworkSystem> network) /*override*/;

    virtual ::ServerInitialization::ServerInitResult fail() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ServerInitialization::ServerInitResult
    $completeWithResult(bool initialized, ::std::shared_ptr<::ServerNetworkSystem> network);

    MCNAPI ::ServerInitialization::ServerInitResult $fail();


    // NOLINTEND
};

} // namespace ServerInitialization
