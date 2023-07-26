#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveToNode {

public:
    // prevent constructor by default
    MoveToNode& operator=(MoveToNode const&) = delete;
    MoveToNode(MoveToNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@MoveToNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@MoveToNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0MoveToNode\@\@QEAA\@XZ
     */
    MCAPI MoveToNode(); // NOLINT
};
