#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ActivateToolNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    ActivateToolNode& operator=(ActivateToolNode const&);
    ActivateToolNode(ActivateToolNode const&);
    ActivateToolNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActivateToolNode@@UEAA@XZ
    virtual ~ActivateToolNode() = default;

    // vIndex: 1, symbol: ?tick@ActivateToolNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@ActivateToolNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
