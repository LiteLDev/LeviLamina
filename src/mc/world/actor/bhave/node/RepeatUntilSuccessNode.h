#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RepeatUntilSuccessNode {

public:
    // prevent constructor by default
    RepeatUntilSuccessNode& operator=(RepeatUntilSuccessNode const&) = delete;
    RepeatUntilSuccessNode(RepeatUntilSuccessNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@RepeatUntilSuccessNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@RepeatUntilSuccessNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0RepeatUntilSuccessNode\@\@QEAA\@XZ
     */
    MCAPI RepeatUntilSuccessNode(); // NOLINT
};
