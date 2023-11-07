#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsStackableComponent {
public:
    // prevent constructor by default
    ScriptIsStackableComponent& operator=(ScriptIsStackableComponent const&);
    ScriptIsStackableComponent(ScriptIsStackableComponent const&);
    ScriptIsStackableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsStackableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsStackableComponent();

    // symbol:
    // ?sClassName@ScriptIsStackableComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsStackableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
