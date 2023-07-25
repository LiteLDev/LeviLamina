#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractActionNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INTERACTACTIONNODE
public:
    InteractActionNode& operator=(InteractActionNode const&) = delete;
    InteractActionNode(InteractActionNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@InteractActionNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@InteractActionNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0InteractActionNode\@\@QEAA\@XZ
     */
    MCAPI InteractActionNode();
};
