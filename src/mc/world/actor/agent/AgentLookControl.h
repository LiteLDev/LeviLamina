#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AgentLookControl {

public:
    // prevent constructor by default
    AgentLookControl& operator=(AgentLookControl const&) = delete;
    AgentLookControl(AgentLookControl const&)            = delete;
    AgentLookControl()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initializeInternal\@AgentLookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void initializeInternal(class Mob&);
    /**
     * @vftbl 2
     * @symbol ?tick\@AgentLookControl\@\@UEAAXAEAVMob\@\@\@Z
     */
    virtual void tick(class Mob&);
    /**
     * @symbol ?sBaseYMax\@AgentLookControl\@\@2MA
     */
    MCAPI static float sBaseYMax;
    // NOLINTEND
};
