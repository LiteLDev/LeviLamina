#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtActorNode {

public:
    // prevent constructor by default
    LookAtActorNode& operator=(LookAtActorNode const&) = delete;
    LookAtActorNode(LookAtActorNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@LookAtActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@LookAtActorNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0LookAtActorNode\@\@QEAA\@XZ
     */
    MCAPI LookAtActorNode(); // NOLINT
};
