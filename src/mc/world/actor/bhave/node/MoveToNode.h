#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveToNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETONODE
public:
    MoveToNode& operator=(MoveToNode const&) = delete;
    MoveToNode(MoveToNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@MoveToNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@MoveToNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0MoveToNode\@\@QEAA\@XZ
     */
    MCAPI MoveToNode();
};
