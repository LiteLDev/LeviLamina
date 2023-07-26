#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RepeatUntilFailureNode {

public:
    // prevent constructor by default
    RepeatUntilFailureNode& operator=(RepeatUntilFailureNode const&) = delete;
    RepeatUntilFailureNode(RepeatUntilFailureNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@RepeatUntilFailureNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@RepeatUntilFailureNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0RepeatUntilFailureNode\@\@QEAA\@XZ
     */
    MCAPI RepeatUntilFailureNode(); // NOLINT
};
