#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UseActorNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_USEACTORNODE
public:
    UseActorNode& operator=(UseActorNode const&) = delete;
    UseActorNode(UseActorNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@UseActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @symbol ??0UseActorNode\@\@QEAA\@XZ
     */
    MCAPI UseActorNode();
};
