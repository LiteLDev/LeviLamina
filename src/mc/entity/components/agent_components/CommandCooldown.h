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
    MCAPI explicit CommandCooldown(float delay);

    // NOLINTEND
};

}; // namespace AgentComponents
