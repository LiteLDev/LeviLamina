#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class RepeatUntilFailureNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    RepeatUntilFailureNode& operator=(RepeatUntilFailureNode const&);
    RepeatUntilFailureNode(RepeatUntilFailureNode const&);
    RepeatUntilFailureNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RepeatUntilFailureNode@@UEAA@XZ
    virtual ~RepeatUntilFailureNode() = default;

    // vIndex: 1, symbol: ?tick@RepeatUntilFailureNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@RepeatUntilFailureNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
