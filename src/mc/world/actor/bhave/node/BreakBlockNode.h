#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class BreakBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    BreakBlockNode& operator=(BreakBlockNode const&);
    BreakBlockNode(BreakBlockNode const&);
    BreakBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BreakBlockNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void initializeFromDefinition$(class Actor& owner);

    MCAPI ::BehaviorStatus tick$(class Actor& owner);

    // NOLINTEND
};
