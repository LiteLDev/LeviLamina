#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ConsumeItemNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    ConsumeItemNode& operator=(ConsumeItemNode const&) = delete;
    ConsumeItemNode(ConsumeItemNode const&)            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?tick@ConsumeItemNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor&);

    // symbol: ??0ConsumeItemNode@@QEAA@XZ
    MCAPI ConsumeItemNode();

    // NOLINTEND
};
