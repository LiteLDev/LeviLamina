#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsIgnitedComponent {
public:
    // prevent constructor by default
    ScriptIsIgnitedComponent& operator=(ScriptIsIgnitedComponent const&);
    ScriptIsIgnitedComponent(ScriptIsIgnitedComponent const&);
    ScriptIsIgnitedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsIgnitedComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsIgnitedComponent();

    // symbol:
    // ?sClassName@ScriptIsIgnitedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsIgnitedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
