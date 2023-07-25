#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentBodyControl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTBODYCONTROL
public:
    AgentBodyControl& operator=(AgentBodyControl const&) = delete;
    AgentBodyControl(AgentBodyControl const&)            = delete;
    AgentBodyControl()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?clientTick\@AgentBodyControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void clientTick(class Mob&);
};
