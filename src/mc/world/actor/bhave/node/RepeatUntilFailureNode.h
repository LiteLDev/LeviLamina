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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@RepeatUntilFailureNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // vIndex: 2, symbol: ?initializeFromDefinition@RepeatUntilFailureNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // NOLINTEND
};
