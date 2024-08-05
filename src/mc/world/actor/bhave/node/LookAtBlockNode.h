#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class LookAtBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    LookAtBlockNode& operator=(LookAtBlockNode const&);
    LookAtBlockNode(LookAtBlockNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LookAtBlockNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    MCAPI LookAtBlockNode();

    // NOLINTEND
};
