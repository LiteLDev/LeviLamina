#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class CommandCooldown {

public:
    // prevent constructor by default
    CommandCooldown& operator=(CommandCooldown const&) = delete;
    CommandCooldown(CommandCooldown const&)            = delete;
    CommandCooldown()                                  = delete;

public:
    /**
     * @symbol ??0CommandCooldown\@AgentComponents\@\@QEAA\@M\@Z
     */
    MCAPI CommandCooldown(float); // NOLINT
};

}; // namespace AgentComponents
