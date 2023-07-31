#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttackNode {

public:
    // prevent constructor by default
    AttackNode& operator=(AttackNode const&) = delete;
    AttackNode(AttackNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@AttackNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@AttackNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0AttackNode\@\@QEAA\@XZ
     */
    MCAPI AttackNode();
    // NOLINTEND
};
