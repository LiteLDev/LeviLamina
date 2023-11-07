#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFlyingSpeedComponent {
public:
    // prevent constructor by default
    ScriptFlyingSpeedComponent& operator=(ScriptFlyingSpeedComponent const&);
    ScriptFlyingSpeedComponent(ScriptFlyingSpeedComponent const&);
    ScriptFlyingSpeedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptFlyingSpeedComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptFlyingSpeedComponent();

    // symbol:
    // ?sClassName@ScriptFlyingSpeedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptFlyingSpeedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
