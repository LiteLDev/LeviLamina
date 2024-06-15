#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinitionPtr {
public:
    // NOLINTBEGIN
    // symbol: ??0BehaviorTreeDefinitionPtr@@QEAA@XZ
    MCAPI BehaviorTreeDefinitionPtr();

    // symbol: ??0BehaviorTreeDefinitionPtr@@QEAA@$$QEAV0@@Z
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr&& moved);

    // symbol: ??0BehaviorTreeDefinitionPtr@@QEAA@AEBV0@@Z
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr const& rhs);

    // symbol: ??0BehaviorTreeDefinitionPtr@@QEAA@AEAVAutomationBehaviorTreeGroup@@AEAVBehaviorTreeDefinition@@@Z
    MCAPI BehaviorTreeDefinitionPtr(
        class AutomationBehaviorTreeGroup& group,
        class BehaviorTreeDefinition&      behaviorTreeDefinition
    );

    // symbol: ??4BehaviorTreeDefinitionPtr@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr&& moved);

    // symbol: ??4BehaviorTreeDefinitionPtr@@QEAAAEAV0@AEBV0@@Z
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr const& rhs);

    // symbol: ??1BehaviorTreeDefinitionPtr@@QEAA@XZ
    MCAPI ~BehaviorTreeDefinitionPtr();

    // symbol: ?NONE@BehaviorTreeDefinitionPtr@@2V1@B
    MCAPI static class BehaviorTreeDefinitionPtr const NONE;

    // NOLINTEND
};
