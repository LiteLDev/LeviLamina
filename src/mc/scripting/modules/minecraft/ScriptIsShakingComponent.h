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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptIsShakingComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptIsShakingComponent();

    // symbol:
    // ?sClassName@ScriptIsShakingComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsShakingComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
