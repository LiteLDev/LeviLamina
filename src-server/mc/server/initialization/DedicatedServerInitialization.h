#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace DedicatedServerInitialization { class IDedicatedServerInitializer; }
namespace DedicatedServerInitialization { struct DedicatedServerInitResult; }
// clang-format on

namespace DedicatedServerInitialization {
// functions
// NOLINTBEGIN
MCNAPI ::DedicatedServerInitialization::DedicatedServerInitResult initDedicatedServer(
    ::std::unique_ptr<::TaskGroup>                                taskGroup,
    ::DedicatedServerInitialization::IDedicatedServerInitializer& init,
    ::std::chrono::seconds                                        multiplayerKeysTimeoutSeconds
);
// NOLINTEND

} // namespace DedicatedServerInitialization
