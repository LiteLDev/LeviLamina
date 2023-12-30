#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class FindBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    FindBlockNode& operator=(FindBlockNode const&);
    FindBlockNode(FindBlockNode const&);
    FindBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FindBlockNode@@UEAA@XZ
    virtual ~FindBlockNode() = default;

    // vIndex: 1, symbol: ?tick@FindBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@FindBlockNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
