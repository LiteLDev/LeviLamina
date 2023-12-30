#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class SelectorBehaviorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    SelectorBehaviorNode& operator=(SelectorBehaviorNode const&);
    SelectorBehaviorNode(SelectorBehaviorNode const&);
    SelectorBehaviorNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SelectorBehaviorNode@@UEAA@XZ
    virtual ~SelectorBehaviorNode() = default;

    // vIndex: 1, symbol: ?tick@SelectorBehaviorNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@SelectorBehaviorNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
