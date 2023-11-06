#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ConsumeItemNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    ConsumeItemNode& operator=(ConsumeItemNode const&);
    ConsumeItemNode(ConsumeItemNode const&);
    ConsumeItemNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ConsumeItemNode();

    // vIndex: 1, symbol: ?tick@ConsumeItemNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // NOLINTEND
};
