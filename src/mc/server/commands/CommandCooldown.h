#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class CommandCooldown {
public:
    // prevent constructor by default
    CommandCooldown& operator=(CommandCooldown const&);
    CommandCooldown(CommandCooldown const&);
    CommandCooldown();

public:
    // NOLINTBEGIN
    // symbol: ??0CommandCooldown@AgentComponents@@QEAA@M@Z
    MCAPI explicit CommandCooldown(float delay);

    // NOLINTEND
};

}; // namespace AgentComponents
