#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct LegacyCommand {
public:
    // prevent constructor by default
    LegacyCommand& operator=(LegacyCommand const&);
    LegacyCommand(LegacyCommand const&);
    LegacyCommand();
};

} // namespace AgentComponents
