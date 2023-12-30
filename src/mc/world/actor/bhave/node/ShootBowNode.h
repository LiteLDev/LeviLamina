#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ShootBowNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    ShootBowNode& operator=(ShootBowNode const&);
    ShootBowNode(ShootBowNode const&);
    ShootBowNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ShootBowNode@@UEAA@XZ
    virtual ~ShootBowNode() = default;

    // vIndex: 1, symbol: ?tick@ShootBowNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@ShootBowNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
