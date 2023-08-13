#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ConsumeItemNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    ConsumeItemNode& operator=(ConsumeItemNode const&) = delete;
    ConsumeItemNode(ConsumeItemNode const&)            = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
