#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinition {
public:
    // prevent constructor by default
    BehaviorTreeDefinition& operator=(BehaviorTreeDefinition const&);
    BehaviorTreeDefinition(BehaviorTreeDefinition const&);
    BehaviorTreeDefinition();

public:
    // NOLINTBEGIN
    MCAPI class BehaviorDefinition const* getRoot() const;

    // NOLINTEND
};
