#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class UseActorNode : public ::BehaviorNode {

public:
    // prevent constructor by default
    UseActorNode& operator=(UseActorNode const&) = delete;
    UseActorNode(UseActorNode const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?tick\@UseActorNode\@\@UEAA?AW4BehaviorStatus\@\@AEAVActor\@\@\@Z
     */
    virtual enum class BehaviorStatus tick(class Actor&);
    /**
     * @symbol ??0UseActorNode\@\@QEAA\@XZ
     */
    MCAPI UseActorNode();
    // NOLINTEND
};
