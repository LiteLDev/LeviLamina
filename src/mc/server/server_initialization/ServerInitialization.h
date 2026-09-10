#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerNetworkSystem;
class TaskGroup;
namespace ServerInitialization { struct ServerInitResult; }
// clang-format on

namespace ServerInitialization {
// functions
// NOLINTBEGIN
MCNAPI ::ServerInitialization::ServerInitResult
_completeWithResult(::TaskGroup& taskGroup, bool initialized, ::std::shared_ptr<::ServerNetworkSystem> network);
// NOLINTEND

} // namespace ServerInitialization
