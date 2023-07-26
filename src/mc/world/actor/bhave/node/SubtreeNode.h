#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubtreeNode {

public:
    // prevent constructor by default
    SubtreeNode& operator=(SubtreeNode const&) = delete;
    SubtreeNode(SubtreeNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@SubtreeNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@SubtreeNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0SubtreeNode\@\@QEAA\@XZ
     */
    MCAPI SubtreeNode(); // NOLINT
};
