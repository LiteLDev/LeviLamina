#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class InteractActionNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    InteractActionNode& operator=(InteractActionNode const&);
    InteractActionNode(InteractActionNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InteractActionNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    MCAPI InteractActionNode();

    // NOLINTEND
};
