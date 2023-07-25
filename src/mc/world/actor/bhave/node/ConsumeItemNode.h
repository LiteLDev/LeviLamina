#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ConsumeItemNode {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONSUMEITEMNODE
public:
    ConsumeItemNode& operator=(ConsumeItemNode const&) = delete;
    ConsumeItemNode(ConsumeItemNode const&)            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@ConsumeItemNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @symbol ??0ConsumeItemNode\@\@QEAA\@XZ
     */
    MCAPI ConsumeItemNode();
};
