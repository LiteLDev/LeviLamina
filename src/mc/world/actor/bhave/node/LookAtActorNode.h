#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class LookAtActorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    LookAtActorNode& operator=(LookAtActorNode const&) = delete;
    LookAtActorNode(LookAtActorNode const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@LookAtActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // vIndex: 2, symbol: ?initializeFromDefinition@LookAtActorNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // symbol: ??0LookAtActorNode@@QEAA@XZ
    MCAPI LookAtActorNode();

    // NOLINTEND
};
