#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BehaviorTreeDefinitionPtr {
public:
    // prevent constructor by default
    BehaviorTreeDefinitionPtr(BehaviorTreeDefinitionPtr const&);

public:
    // NOLINTBEGIN
    // symbol: ??0BehaviorTreeDefinitionPtr@@QEAA@XZ
    MCAPI BehaviorTreeDefinitionPtr();

    // symbol: ??0BehaviorTreeDefinitionPtr@@QEAA@$$QEAV0@@Z
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr&& moved);

    // symbol: ??4BehaviorTreeDefinitionPtr@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr&& moved);

    // symbol: ??4BehaviorTreeDefinitionPtr@@QEAAAEAV0@AEBV0@@Z
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr const& rhs);

    // symbol: ??1BehaviorTreeDefinitionPtr@@QEAA@XZ
    MCAPI ~BehaviorTreeDefinitionPtr();

    // symbol: ?NONE@BehaviorTreeDefinitionPtr@@2V1@B
    MCAPI static class BehaviorTreeDefinitionPtr const NONE;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_move@BehaviorTreeDefinitionPtr@@IEAAAEAV1@$$QEAV1@@Z
    MCAPI class BehaviorTreeDefinitionPtr& _move(class BehaviorTreeDefinitionPtr&& moved);

    // NOLINTEND
};
