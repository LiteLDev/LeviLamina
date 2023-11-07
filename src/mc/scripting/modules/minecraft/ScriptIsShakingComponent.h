#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsShakingComponent {
public:
    // prevent constructor by default
    ScriptIsShakingComponent& operator=(ScriptIsShakingComponent const&);
    ScriptIsShakingComponent(ScriptIsShakingComponent const&);
    ScriptIsShakingComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsShakingComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsShakingComponent();

    // symbol:
    // ?sClassName@ScriptIsShakingComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsShakingComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
