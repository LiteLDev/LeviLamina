#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentInteractCommandSystem {

public:
    // prevent constructor by default
    AgentInteractCommandSystem& operator=(AgentInteractCommandSystem const&) = delete;
    AgentInteractCommandSystem(AgentInteractCommandSystem const&)            = delete;
    AgentInteractCommandSystem()                                             = delete;

public:
    // NOLINTBEGIN
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
     * @symbol ?tick\@AgentInteractCommandSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    // NOLINTEND
};
