#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaitTicksNode {

public:
    // prevent constructor by default
    WaitTicksNode& operator=(WaitTicksNode const&) = delete;
    WaitTicksNode(WaitTicksNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@WaitTicksNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@WaitTicksNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0WaitTicksNode\@\@QEAA\@XZ
     */
    MCAPI WaitTicksNode(); // NOLINT
};
