#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlyNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLYNODE
public:
    FlyNode& operator=(FlyNode const&) = delete;
    FlyNode(FlyNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@FlyNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@FlyNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0FlyNode\@\@QEAA\@XZ
     */
    MCAPI FlyNode();
};
