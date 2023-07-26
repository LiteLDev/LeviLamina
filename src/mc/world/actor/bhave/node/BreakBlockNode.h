#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BreakBlockNode {

public:
    // prevent constructor by default
    BreakBlockNode& operator=(BreakBlockNode const&) = delete;
    BreakBlockNode(BreakBlockNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@BreakBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@BreakBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0BreakBlockNode\@\@QEAA\@XZ
     */
    MCAPI BreakBlockNode(); // NOLINT
};
