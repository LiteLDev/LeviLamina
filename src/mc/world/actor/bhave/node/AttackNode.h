#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackNode {

public:
    // prevent constructor by default
    AttackNode& operator=(AttackNode const&) = delete;
    AttackNode(AttackNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@AttackNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@AttackNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0AttackNode\@\@QEAA\@XZ
     */
    MCAPI AttackNode(); // NOLINT
};
