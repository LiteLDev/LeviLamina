#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class AttackNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    AttackNode& operator=(AttackNode const&);
    AttackNode(AttackNode const&);
    AttackNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AttackNode@@UEAA@XZ
    virtual ~AttackNode() = default;

    // vIndex: 1, symbol: ?tick@AttackNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@AttackNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
