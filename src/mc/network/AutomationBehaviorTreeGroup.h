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
    // symbol: ??0AutomationBehaviorTreeGroup@@QEAA@AEAVResourcePackManager@@AEAVBehaviorFactory@@@Z
    MCAPI AutomationBehaviorTreeGroup(class ResourcePackManager&, class BehaviorFactory&);

    // symbol:
    // ?tryGetDefinition@AutomationBehaviorTreeGroup@@QEAA?AVBehaviorTreeDefinitionPtr@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class BehaviorTreeDefinitionPtr tryGetDefinition(std::string const&);

    // symbol: ??1AutomationBehaviorTreeGroup@@QEAA@XZ
    MCAPI ~AutomationBehaviorTreeGroup();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_removeRef@AutomationBehaviorTreeGroup@@AEAAXAEAVBehaviorTreeDefinitionPtr@@@Z
    MCAPI void _removeRef(class BehaviorTreeDefinitionPtr&);

    // NOLINTEND
};
