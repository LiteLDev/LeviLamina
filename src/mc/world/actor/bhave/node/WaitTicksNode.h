#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaitTicksNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITTICKSNODE
public:
    WaitTicksNode& operator=(WaitTicksNode const&) = delete;
    WaitTicksNode(WaitTicksNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@WaitTicksNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@WaitTicksNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0WaitTicksNode\@\@QEAA\@XZ
     */
    MCAPI WaitTicksNode();
};
