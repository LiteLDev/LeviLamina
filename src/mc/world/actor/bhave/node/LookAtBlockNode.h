#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtBlockNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LOOKATBLOCKNODE
public:
    LookAtBlockNode& operator=(LookAtBlockNode const&) = delete;
    LookAtBlockNode(LookAtBlockNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@LookAtBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@LookAtBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0LookAtBlockNode\@\@QEAA\@XZ
     */
    MCAPI LookAtBlockNode();
};
