#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ExecuteCommandHelpers {
// NOLINTBEGIN
// symbol:
// ?handleResult@ExecuteCommandHelpers@@YAXAEBVCommand@@AEBV?$vector@PEBVActor@@V?$allocator@PEBVActor@@@std@@@std@@AEAVCommandOutput@@@Z
MCAPI void
handleResult(class Command const& command, std::vector<class Actor const*> const&, class CommandOutput& output);

// symbol:
// ?runCommand@ExecuteCommandHelpers@@YAXAEBVCommand@@AEBVCommandOrigin@@AEBVActor@@AEAV?$vector@PEBVActor@@V?$allocator@PEBVActor@@@std@@@std@@AEAVCommandOutput@@@Z
MCAPI void runCommand(
    class Command const& command,
    class CommandOrigin const&,
    class Actor const& entity,
    std::vector<class Actor const*>&,
    class CommandOutput& output
);
// NOLINTEND

}; // namespace ExecuteCommandHelpers
