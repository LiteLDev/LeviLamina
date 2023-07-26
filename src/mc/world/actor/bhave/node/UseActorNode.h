#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UseActorNode {

public:
    // prevent constructor by default
    UseActorNode& operator=(UseActorNode const&) = delete;
    UseActorNode(UseActorNode const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?tick\@UseActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&); // NOLINT
    /**
     * @symbol ??0UseActorNode\@\@QEAA\@XZ
     */
    MCAPI UseActorNode(); // NOLINT
};
