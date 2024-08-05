#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class ConsumeItemNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    ConsumeItemNode& operator=(ConsumeItemNode const&);
    ConsumeItemNode(ConsumeItemNode const&);
    ConsumeItemNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ConsumeItemNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // NOLINTEND
};
