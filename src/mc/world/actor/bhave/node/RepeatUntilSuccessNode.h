#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class RepeatUntilSuccessNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    RepeatUntilSuccessNode& operator=(RepeatUntilSuccessNode const&) = delete;
    RepeatUntilSuccessNode(RepeatUntilSuccessNode const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
