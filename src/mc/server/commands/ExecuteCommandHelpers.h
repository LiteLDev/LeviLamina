#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExecuteCommandHelpers {
// NOLINTBEGIN
MCAPI void
handleResult(class Command const& command, std::vector<class Actor const*> const& failed, class CommandOutput& output);

MCAPI void runCommand(
    class Command const&             command,
    class CommandOrigin const&       commandOrigin,
    class Actor const&               entity,
    std::vector<class Actor const*>& failed,
    class CommandOutput&             output
);
// NOLINTEND

}; // namespace ExecuteCommandHelpers
