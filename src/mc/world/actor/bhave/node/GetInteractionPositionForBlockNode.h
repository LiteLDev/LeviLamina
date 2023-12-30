#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/Facing.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class GetInteractionPositionForBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    GetInteractionPositionForBlockNode& operator=(GetInteractionPositionForBlockNode const&);
    GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode const&);
    GetInteractionPositionForBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1GetInteractionPositionForBlockNode@@UEAA@XZ
    virtual ~GetInteractionPositionForBlockNode() = default;

    // vIndex: 1, symbol: ?tick@GetInteractionPositionForBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2, symbol: ?initializeFromDefinition@GetInteractionPositionForBlockNode@@EEAAXAEAVActor@@@Z
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?parseFacingNameFromString@GetInteractionPositionForBlockNode@@AEAA?AW4Name@Facing@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI ::Facing::Name parseFacingNameFromString(std::string facingString);

    // NOLINTEND
};
