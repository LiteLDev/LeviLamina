#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"

class BehaviorNode {
public:
    // prevent constructor by default
    BehaviorNode& operator=(BehaviorNode const&);
    BehaviorNode(BehaviorNode const&);
    BehaviorNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BehaviorNode@@UEAA@XZ
    virtual ~BehaviorNode();

    // vIndex: 1, symbol: ?tick@ActivateToolNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner) = 0;

    // vIndex: 2, symbol: ?initializeFromDefinition@BehaviorNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
