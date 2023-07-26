#pragma once

#include "mc/_HeaderOutputPredefine.h"

class InteractActionNode {

public:
    // prevent constructor by default
    InteractActionNode& operator=(InteractActionNode const&) = delete;
    InteractActionNode(InteractActionNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@InteractActionNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@InteractActionNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0InteractActionNode\@\@QEAA\@XZ
     */
    MCAPI InteractActionNode(); // NOLINT
};
