#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class BreakBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    BreakBlockNode& operator=(BreakBlockNode const&);
    BreakBlockNode(BreakBlockNode const&);
    BreakBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreakBlockNode@@UEAA@XZ
    virtual ~BreakBlockNode() = default;

    // vIndex: 1, symbol: ?tick@BreakBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@BreakBlockNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
