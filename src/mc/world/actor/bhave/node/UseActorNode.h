#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class UseActorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    UseActorNode& operator=(UseActorNode const&);
    UseActorNode(UseActorNode const&);
    UseActorNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1UseActorNode@@UEAA@XZ
    virtual ~UseActorNode() = default;

    // vIndex: 1, symbol: ?tick@UseActorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // NOLINTEND
};
