#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"

class BehaviorNode {
public:
    // prevent constructor by default
    BehaviorNode& operator=(BehaviorNode const&) = delete;
    BehaviorNode(BehaviorNode const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@ShootBowNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&) = 0;

    // vIndex: 2, symbol: ?initializeFromDefinition@BehaviorNode@@MEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor&);

    // symbol: ??1BehaviorNode@@UEAA@XZ
    MCVAPI ~BehaviorNode();

    // symbol: ??0BehaviorNode@@QEAA@XZ
    MCAPI BehaviorNode();

    // symbol: ?getBehaviorData@BehaviorNode@@QEAAAEAVBehaviorData@@XZ
    MCAPI class BehaviorData& getBehaviorData();

    // NOLINTEND
};
