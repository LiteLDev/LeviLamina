#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class InverterNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    InverterNode& operator=(InverterNode const&);
    InverterNode(InverterNode const&);
    InverterNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1InverterNode@@UEAA@XZ
    virtual ~InverterNode() = default;

    // vIndex: 1, symbol: ?tick@InverterNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@InverterNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
