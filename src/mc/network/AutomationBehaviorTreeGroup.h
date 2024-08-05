#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AutomationBehaviorTreeGroup {
public:
    // prevent constructor by default
    AutomationBehaviorTreeGroup& operator=(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup(AutomationBehaviorTreeGroup const&);
    AutomationBehaviorTreeGroup();

public:
    // NOLINTBEGIN
    MCAPI AutomationBehaviorTreeGroup(class ResourcePackManager&, class BehaviorFactory&);

    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const&);

    MCAPI ~AutomationBehaviorTreeGroup();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addRef(class BehaviorTreeDefinitionPtr&);

    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr&);

    // NOLINTEND
};
