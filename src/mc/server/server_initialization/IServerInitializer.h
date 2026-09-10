#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
namespace ServerInitialization { struct ServerInitResult; }
// clang-format on

namespace ServerInitialization {

class IServerInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerInitializer() = default;

    virtual ::ServerInitialization::ServerInitResult
    completeWithResult(bool initialized, ::std::shared_ptr<::ServerNetworkSystem> network) = 0;

    virtual ::ServerInitialization::ServerInitResult fail() = 0;
    // NOLINTEND
};

} // namespace ServerInitialization
