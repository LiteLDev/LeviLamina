#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActivateToolNode {

public:
    // prevent constructor by default
    ActivateToolNode& operator=(ActivateToolNode const&) = delete;
    ActivateToolNode(ActivateToolNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@ActivateToolNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@ActivateToolNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&); // NOLINT
    /**
     * @symbol ??0ActivateToolNode\@\@QEAA\@XZ
     */
    MCAPI ActivateToolNode(); // NOLINT
};
