#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentDestroyCommandSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTDESTROYCOMMANDSYSTEM
public:
    AgentDestroyCommandSystem& operator=(AgentDestroyCommandSystem const&) = delete;
    AgentDestroyCommandSystem(AgentDestroyCommandSystem const&)            = delete;
    AgentDestroyCommandSystem()                                            = delete;
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
     * @symbol ?tick\@AgentDestroyCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
