#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class MoveToNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    MoveToNode& operator=(MoveToNode const&) = delete;
    MoveToNode(MoveToNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@MoveToNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@MoveToNode\@\@EEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0MoveToNode\@\@QEAA\@XZ
     */
    MCAPI MoveToNode();
    // NOLINTEND
};
