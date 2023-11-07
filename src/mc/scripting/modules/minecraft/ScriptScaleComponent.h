#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptScaleComponent {
public:
    // prevent constructor by default
    ScriptScaleComponent& operator=(ScriptScaleComponent const&);
    ScriptScaleComponent(ScriptScaleComponent const&);
    ScriptScaleComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptScaleComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptScaleComponent();

    // symbol:
    // ?sClassName@ScriptScaleComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptScaleComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
