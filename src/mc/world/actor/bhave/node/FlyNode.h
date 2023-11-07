#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class FlyNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    FlyNode& operator=(FlyNode const&);
    FlyNode(FlyNode const&);
    FlyNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~FlyNode() = default;

    // vIndex: 1, symbol: ?tick@FlyNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // vIndex: 2, symbol: ?initializeFromDefinition@FlyNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // NOLINTEND
};
