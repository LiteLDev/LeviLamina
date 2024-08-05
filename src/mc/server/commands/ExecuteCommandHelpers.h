#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExecuteCommandHelpers {
// NOLINTBEGIN
MCAPI void
handleResult(class Command const& command, std::vector<class Actor const*> const&, class CommandOutput& output);

MCAPI void runCommand(
    class Command const& command,
    class CommandOrigin const&,
    class Actor const& entity,
    std::vector<class Actor const*>&,
    class CommandOutput& output
);
// NOLINTEND

}; // namespace ExecuteCommandHelpers
