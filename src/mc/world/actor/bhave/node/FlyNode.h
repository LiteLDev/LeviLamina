#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlyNode {

public:
    // prevent constructor by default
    FlyNode& operator=(FlyNode const&) = delete;
    FlyNode(FlyNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@FlyNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@FlyNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0FlyNode\@\@QEAA\@XZ
     */
    MCAPI FlyNode(); // NOLINT
};
