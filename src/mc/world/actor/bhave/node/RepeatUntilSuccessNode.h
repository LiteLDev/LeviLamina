#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class RepeatUntilSuccessNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    RepeatUntilSuccessNode& operator=(RepeatUntilSuccessNode const&);
    RepeatUntilSuccessNode(RepeatUntilSuccessNode const&);
    RepeatUntilSuccessNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RepeatUntilSuccessNode@@UEAA@XZ
    virtual ~RepeatUntilSuccessNode() = default;

    // vIndex: 1, symbol: ?tick@RepeatUntilSuccessNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@RepeatUntilSuccessNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
