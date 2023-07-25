#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FindActorNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDACTORNODE
public:
    FindActorNode& operator=(FindActorNode const&) = delete;
    FindActorNode(FindActorNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@FindActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@FindActorNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0FindActorNode\@\@QEAA\@XZ
     */
    MCAPI FindActorNode();
};
