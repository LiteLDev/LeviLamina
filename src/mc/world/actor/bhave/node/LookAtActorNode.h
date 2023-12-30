#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class LookAtActorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    LookAtActorNode& operator=(LookAtActorNode const&);
    LookAtActorNode(LookAtActorNode const&);
    LookAtActorNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LookAtActorNode@@UEAA@XZ
    virtual ~LookAtActorNode() = default;

    // vIndex: 1, symbol: ?tick@LookAtActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@LookAtActorNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
