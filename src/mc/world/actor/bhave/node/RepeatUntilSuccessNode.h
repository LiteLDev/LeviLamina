#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RepeatUntilSuccessNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPEATUNTILSUCCESSNODE
public:
    RepeatUntilSuccessNode& operator=(RepeatUntilSuccessNode const&) = delete;
    RepeatUntilSuccessNode(RepeatUntilSuccessNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@RepeatUntilSuccessNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@RepeatUntilSuccessNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0RepeatUntilSuccessNode\@\@QEAA\@XZ
     */
    MCAPI RepeatUntilSuccessNode();
};
