#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class CommandCooldown {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk189dff;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandCooldown& operator=(CommandCooldown const&);
    CommandCooldown(CommandCooldown const&);
    CommandCooldown();

};

}
