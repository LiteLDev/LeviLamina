#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class PlaceBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    PlaceBlockNode& operator=(PlaceBlockNode const&);
    PlaceBlockNode(PlaceBlockNode const&);
    PlaceBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PlaceBlockNode@@UEAA@XZ
    virtual ~PlaceBlockNode() = default;

    // vIndex: 1, symbol: ?tick@PlaceBlockNode@@UEAA?AW4BehaviorStatus@@AEAVActor@@@Z
    virtual ::BehaviorStatus tick(class Actor& owner);

    // NOLINTEND
};
