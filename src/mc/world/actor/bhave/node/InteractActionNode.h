#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void initializeFromDefinition$(class Actor& owner);

    MCAPI ::BehaviorStatus tick$(class Actor& owner);

    // NOLINTEND
};
