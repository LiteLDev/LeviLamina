#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class WaitTicksNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    WaitTicksNode& operator=(WaitTicksNode const&);
    WaitTicksNode(WaitTicksNode const&);
    WaitTicksNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WaitTicksNode@@UEAA@XZ
    virtual ~WaitTicksNode() = default;

    // vIndex: 1, symbol: ?tick@WaitTicksNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@WaitTicksNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
