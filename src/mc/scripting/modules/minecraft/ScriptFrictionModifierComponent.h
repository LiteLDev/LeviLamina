#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFrictionModifierComponent {
public:
    // prevent constructor by default
    ScriptFrictionModifierComponent& operator=(ScriptFrictionModifierComponent const&);
    ScriptFrictionModifierComponent(ScriptFrictionModifierComponent const&);
    ScriptFrictionModifierComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptFrictionModifierComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptFrictionModifierComponent();

    // symbol:
    // ?sClassName@ScriptFrictionModifierComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptFrictionModifierComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
