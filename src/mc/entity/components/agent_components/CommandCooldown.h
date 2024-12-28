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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CommandCooldown(float delay);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float delay);
    // NOLINTEND
};

} // namespace AgentComponents
