#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class AttackNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    AttackNode& operator=(AttackNode const&) = delete;
    AttackNode(AttackNode const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@AttackNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // vIndex: 2, symbol: ?initializeFromDefinition@AttackNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // symbol: ??0AttackNode@@QEAA@XZ
    MCAPI AttackNode();

    // NOLINTEND
};
