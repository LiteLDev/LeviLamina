#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptColorComponent {
public:
    // prevent constructor by default
    ScriptColorComponent& operator=(ScriptColorComponent const&);
    ScriptColorComponent(ScriptColorComponent const&);
    ScriptColorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptColorComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptColorComponent();

    // symbol:
    // ?sClassName@ScriptColorComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptColorComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
