#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentBodyControl {

public:
    // prevent constructor by default
    AgentBodyControl& operator=(AgentBodyControl const&) = delete;
    AgentBodyControl(AgentBodyControl const&)            = delete;
    AgentBodyControl()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?clientTick\@AgentBodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob&); // NOLINT
};
