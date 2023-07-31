#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorNode {

public:
    // prevent constructor by default
    BehaviorNode& operator=(BehaviorNode const&) = delete;
    BehaviorNode(BehaviorNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0() = 0;
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@BehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEHAVIORNODE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BehaviorNode();
#endif
    /**
     * @symbol ??0BehaviorNode\@\@QEAA\@XZ
     */
    MCAPI BehaviorNode();
    /**
     * @symbol ?getBehaviorData\@BehaviorNode\@\@QEAAAEAVBehaviorData\@\@XZ
     */
    MCAPI class BehaviorData& getBehaviorData();
    // NOLINTEND
};
