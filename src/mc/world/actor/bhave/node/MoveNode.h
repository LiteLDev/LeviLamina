#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class MoveNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    MoveNode& operator=(MoveNode const&);
    MoveNode(MoveNode const&);
    MoveNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MoveNode@@UEAA@XZ
    virtual ~MoveNode() = default;

    // vIndex: 1, symbol: ?tick@MoveNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@MoveNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?convertDirectionStringToKeyPress@MoveNode@@AEAAEV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI uchar convertDirectionStringToKeyPress(std::string directionString);

    // NOLINTEND
};
