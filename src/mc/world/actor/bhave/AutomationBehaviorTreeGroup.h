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
    MCAPI AutomationBehaviorTreeGroup(class ResourcePackManager& packManager, class BehaviorFactory& factory);

    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const& defId);

    MCAPI ~AutomationBehaviorTreeGroup();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addRef(class BehaviorTreeDefinitionPtr& ref);

    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr& ref);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
