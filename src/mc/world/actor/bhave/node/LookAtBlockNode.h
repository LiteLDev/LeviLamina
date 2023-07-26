#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LookAtBlockNode {

public:
    // prevent constructor by default
    LookAtBlockNode& operator=(LookAtBlockNode const&) = delete;
    LookAtBlockNode(LookAtBlockNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@LookAtBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@LookAtBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0LookAtBlockNode\@\@QEAA\@XZ
     */
    MCAPI LookAtBlockNode(); // NOLINT
};
