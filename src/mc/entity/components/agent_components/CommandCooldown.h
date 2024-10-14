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

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace AgentComponents
