#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
namespace ServerInitialization { class IServerInitializer; }
namespace ServerInitialization { struct ServerInitResult; }
// clang-format on

namespace ServerInitialization {
// functions
// NOLINTBEGIN
MCNAPI ::ServerInitialization::ServerInitResult initializeLevel(
    ::ServerInitialization::IServerInitializer&                      server,
    ::brstd::move_only_function<void()>                              init,
    ::brstd::move_only_function<::Bedrock::Threading::Async<bool>()> postInit,
    ::std::shared_ptr<::ServerNetworkSystem>                         network
);
// NOLINTEND

} // namespace ServerInitialization
