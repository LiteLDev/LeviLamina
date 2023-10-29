#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptWantsJockeyComponent {
public:
    // prevent constructor by default
    ScriptWantsJockeyComponent& operator=(ScriptWantsJockeyComponent const&);
    ScriptWantsJockeyComponent(ScriptWantsJockeyComponent const&);
    ScriptWantsJockeyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptWantsJockeyComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptWantsJockeyComponent();

    // symbol:
    // ?sClassName@ScriptWantsJockeyComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptWantsJockeyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
