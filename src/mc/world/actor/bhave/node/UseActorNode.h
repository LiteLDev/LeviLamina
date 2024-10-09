#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class UseActorNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    UseActorNode& operator=(UseActorNode const&);
    UseActorNode(UseActorNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UseActorNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    MCAPI UseActorNode();

    // NOLINTEND
};
