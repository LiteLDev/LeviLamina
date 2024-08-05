#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinitionPtr {
public:
    // NOLINTBEGIN
    MCAPI BehaviorTreeDefinitionPtr();

    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr&& moved);

    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const& rhs);

    MCAPI BehaviorTreeDefinitionPtr(
        class AutomationBehaviorTreeGroup& group,
        class BehaviorTreeDefinition&      behaviorTreeDefinition
    );

    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr&& moved);

    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr const& rhs);

    MCAPI ~BehaviorTreeDefinitionPtr();

    MCAPI static class BehaviorTreeDefinitionPtr const NONE;

    // NOLINTEND
};
