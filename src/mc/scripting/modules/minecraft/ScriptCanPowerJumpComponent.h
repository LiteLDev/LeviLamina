#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCanPowerJumpComponent {
public:
    // prevent constructor by default
    ScriptCanPowerJumpComponent& operator=(ScriptCanPowerJumpComponent const&);
    ScriptCanPowerJumpComponent(ScriptCanPowerJumpComponent const&);
    ScriptCanPowerJumpComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptCanPowerJumpComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptCanPowerJumpComponent();

    // symbol:
    // ?sClassName@ScriptCanPowerJumpComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptCanPowerJumpComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
