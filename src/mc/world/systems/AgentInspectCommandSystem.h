#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentInspectCommandSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTINSPECTCOMMANDSYSTEM
public:
    AgentInspectCommandSystem& operator=(AgentInspectCommandSystem const&) = delete;
    AgentInspectCommandSystem(AgentInspectCommandSystem const&)            = delete;
    AgentInspectCommandSystem()                                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@AgentInspectCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
