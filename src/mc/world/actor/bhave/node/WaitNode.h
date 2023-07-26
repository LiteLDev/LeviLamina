#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaitNode {

public:
    // prevent constructor by default
    WaitNode& operator=(WaitNode const&) = delete;
    WaitNode(WaitNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@WaitNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@WaitNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0WaitNode\@\@QEAA\@XZ
     */
    MCAPI WaitNode(); // NOLINT
};
