#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class MoveToNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    MoveToNode& operator=(MoveToNode const&);
    MoveToNode(MoveToNode const&);
    MoveToNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveToNode@@UEAA@XZ
    virtual ~MoveToNode() = default;

    // vIndex: 1, symbol: ?tick@MoveToNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@MoveToNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
