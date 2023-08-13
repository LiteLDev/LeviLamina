#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class RepeatUntilFailureNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    RepeatUntilFailureNode& operator=(RepeatUntilFailureNode const&) = delete;
    RepeatUntilFailureNode(RepeatUntilFailureNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@RepeatUntilFailureNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @vftbl 2
     * @symbol ?initializeFromDefinition\@RepeatUntilFailureNode\@\@MEAAXAEAVActor\@\@\@Z
     */
    virtual void initializeFromDefinition(class Actor&);
    /**
     * @symbol ??0RepeatUntilFailureNode\@\@QEAA\@XZ
     */
    MCAPI RepeatUntilFailureNode();
    // NOLINTEND
};
