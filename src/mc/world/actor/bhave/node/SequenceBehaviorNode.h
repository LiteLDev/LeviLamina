#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class SequenceBehaviorNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    SequenceBehaviorNode& operator=(SequenceBehaviorNode const&) = delete;
    SequenceBehaviorNode(SequenceBehaviorNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@SequenceBehaviorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@SequenceBehaviorNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0SequenceBehaviorNode\@\@QEAA\@XZ
     */
    MCAPI SequenceBehaviorNode();
    // NOLINTEND
};
