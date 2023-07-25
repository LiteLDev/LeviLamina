#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaitNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WAITNODE
public:
    WaitNode& operator=(WaitNode const&) = delete;
    WaitNode(WaitNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@WaitNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@WaitNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0WaitNode\@\@QEAA\@XZ
     */
    MCAPI WaitNode();
};
