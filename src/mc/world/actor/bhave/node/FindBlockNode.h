#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/bhave/node/BehaviorNode.h"

class FindBlockNode : public ::BehaviorNode {
public:
    // prevent constructor by default
    FindBlockNode& operator=(FindBlockNode const&);
    FindBlockNode(FindBlockNode const&);
    FindBlockNode();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FindBlockNode() = default;

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner);

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    // NOLINTEND
};
