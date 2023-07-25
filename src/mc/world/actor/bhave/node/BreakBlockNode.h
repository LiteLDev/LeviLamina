#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlockNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREAKBLOCKNODE
public:
    BreakBlockNode& operator=(BreakBlockNode const&) = delete;
    BreakBlockNode(BreakBlockNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@BreakBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@BreakBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0BreakBlockNode\@\@QEAA\@XZ
     */
    MCAPI BreakBlockNode();
};
