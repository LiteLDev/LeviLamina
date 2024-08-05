#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BehaviorStatus.h"

class BehaviorNode {
public:
    // prevent constructor by default
    BehaviorNode& operator=(BehaviorNode const&);
    BehaviorNode(BehaviorNode const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BehaviorNode();

    // vIndex: 1
    virtual ::BehaviorStatus tick(class Actor& owner) = 0;

    // vIndex: 2
    virtual void initializeFromDefinition(class Actor& owner);

    MCAPI BehaviorNode();

    MCAPI class BehaviorData& getBehaviorData();

    // NOLINTEND
};
