#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class FlyNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    FlyNode& operator=(FlyNode const&);
    FlyNode(FlyNode const&);
    FlyNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlyNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
