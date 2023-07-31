#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubtreeNode {

public:
    // prevent constructor by default
    SubtreeNode& operator=(SubtreeNode const&) = delete;
    SubtreeNode(SubtreeNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@SubtreeNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@SubtreeNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0SubtreeNode\@\@QEAA\@XZ
     */
    MCAPI SubtreeNode();
    // NOLINTEND
};
