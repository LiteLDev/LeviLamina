#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SequenceBehaviorNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEQUENCEBEHAVIORNODE
public:
    SequenceBehaviorNode& operator=(SequenceBehaviorNode const&) = delete;
    SequenceBehaviorNode(SequenceBehaviorNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@SequenceBehaviorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@SequenceBehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0SequenceBehaviorNode\@\@QEAA\@XZ
     */
    MCAPI SequenceBehaviorNode();
};
