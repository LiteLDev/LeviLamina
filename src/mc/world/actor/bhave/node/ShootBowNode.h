#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShootBowNode {

public:
    // prevent constructor by default
    ShootBowNode& operator=(ShootBowNode const&) = delete;
    ShootBowNode(ShootBowNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@ShootBowNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@ShootBowNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0ShootBowNode\@\@QEAA\@XZ
     */
    MCAPI ShootBowNode();
    // NOLINTEND
};
