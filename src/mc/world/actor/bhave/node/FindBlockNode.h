#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FindBlockNode {

public:
    // prevent constructor by default
    FindBlockNode& operator=(FindBlockNode const&) = delete;
    FindBlockNode(FindBlockNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@FindBlockNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@FindBlockNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0FindBlockNode\@\@QEAA\@XZ
     */
    MCAPI FindBlockNode();
    // NOLINTEND
};
