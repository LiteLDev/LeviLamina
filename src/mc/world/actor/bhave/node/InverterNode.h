#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class InverterNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    InverterNode& operator=(InverterNode const&);
    InverterNode(InverterNode const&);
    InverterNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InverterNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
