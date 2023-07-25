#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShootBowNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHOOTBOWNODE
public:
    ShootBowNode& operator=(ShootBowNode const&) = delete;
    ShootBowNode(ShootBowNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@ShootBowNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@ShootBowNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0ShootBowNode\@\@QEAA\@XZ
     */
    MCAPI ShootBowNode();
};
