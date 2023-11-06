#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCanFlyComponent {
public:
    // prevent constructor by default
    ScriptCanFlyComponent& operator=(ScriptCanFlyComponent const&);
    ScriptCanFlyComponent(ScriptCanFlyComponent const&);
    ScriptCanFlyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptCanFlyComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptCanFlyComponent();

    // symbol:
    // ?sClassName@ScriptCanFlyComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptCanFlyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
