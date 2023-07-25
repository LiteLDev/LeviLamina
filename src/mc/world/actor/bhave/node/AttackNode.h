#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTACKNODE
public:
    AttackNode& operator=(AttackNode const&) = delete;
    AttackNode(AttackNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@AttackNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@AttackNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0AttackNode\@\@QEAA\@XZ
     */
    MCAPI AttackNode();
};
