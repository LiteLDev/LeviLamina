#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class FindActorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    FindActorNode& operator=(FindActorNode const&);
    FindActorNode(FindActorNode const&);
    FindActorNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindActorNode@@UEAA@XZ
    virtual ~FindActorNode() = default;

    // vIndex: 1, symbol: ?tick@FindActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@FindActorNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
