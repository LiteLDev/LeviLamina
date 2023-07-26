#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentLookControl {

public:
    // prevent constructor by default
    AgentLookControl& operator=(AgentLookControl const&) = delete;
    AgentLookControl(AgentLookControl const&)            = delete;
    AgentLookControl()                                   = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@AgentLookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void initializeInternal(class Mob&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@AgentLookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void tick(class Mob&); // NOLINT
    /**
     * @symbol ?sBaseYMax\@AgentLookControl\@\@2MA
     */
    MCAPI static float sBaseYMax; // NOLINT
};
