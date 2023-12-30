#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class SubtreeNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    SubtreeNode& operator=(SubtreeNode const&);
    SubtreeNode(SubtreeNode const&);
    SubtreeNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SubtreeNode@@UEAA@XZ
    virtual ~SubtreeNode() = default;

    // vIndex: 1, symbol: ?tick@SubtreeNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@SubtreeNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
