#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class LookAtBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    LookAtBlockNode& operator=(LookAtBlockNode const&);
    LookAtBlockNode(LookAtBlockNode const&);
    LookAtBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LookAtBlockNode();

    // vIndex: 1, symbol: ?tick@LookAtBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // vIndex: 2, symbol: ?initializeFromDefinition@LookAtBlockNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // NOLINTEND
};
