#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorNode {

public:
    // prevent constructor by default
    BehaviorNode& operator=(BehaviorNode const&) = delete;
    BehaviorNode(BehaviorNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0; // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@BehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORNODE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BehaviorNode(); // NOLINT
#endif
    /**
     * @symbol ??0BehaviorNode\@\@QEAA\@XZ
     */
    MCAPI BehaviorNode(); // NOLINT
    /**
     * @symbol ?getBehaviorData\@BehaviorNode\@\@QEAAAEAVBehaviorData\@\@XZ
     */
    MCAPI class BehaviorData& getBehaviorData(); // NOLINT
};
