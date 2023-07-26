#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentAnimationSystem {

public:
    // prevent constructor by default
    AgentAnimationSystem& operator=(AgentAnimationSystem const&) = delete;
    AgentAnimationSystem(AgentAnimationSystem const&)            = delete;
    AgentAnimationSystem()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@AgentAnimationSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
