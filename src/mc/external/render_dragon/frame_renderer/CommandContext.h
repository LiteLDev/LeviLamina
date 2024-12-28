#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace dragon::framerenderer {

class CommandContext {
public:
    // prevent constructor by default
    CommandContext& operator=(CommandContext const&);
    CommandContext(CommandContext const&);
    CommandContext();
};

} // namespace dragon::framerenderer
