#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaitNode {

public:
    // prevent constructor by default
    WaitNode& operator=(WaitNode const&) = delete;
    WaitNode(WaitNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@WaitNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@WaitNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0WaitNode\@\@QEAA\@XZ
     */
    MCAPI WaitNode();
    // NOLINTEND
};
