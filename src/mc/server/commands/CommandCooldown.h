#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

class CommandCooldown {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMPONENTS_COMMANDCOOLDOWN
public:
    CommandCooldown& operator=(CommandCooldown const&) = delete;
    CommandCooldown(CommandCooldown const&)            = delete;
    CommandCooldown()                                  = delete;
#endif

public:
    /**
     * @symbol ??0CommandCooldown\@AgentComponents\@\@QEAA\@M\@Z
     */
    MCAPI CommandCooldown(float);
};

}; // namespace AgentComponents
