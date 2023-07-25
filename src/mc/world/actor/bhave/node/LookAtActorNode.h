#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtActorNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATACTORNODE
public:
    LookAtActorNode& operator=(LookAtActorNode const&) = delete;
    LookAtActorNode(LookAtActorNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@LookAtActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@LookAtActorNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0LookAtActorNode\@\@QEAA\@XZ
     */
    MCAPI LookAtActorNode();
};
