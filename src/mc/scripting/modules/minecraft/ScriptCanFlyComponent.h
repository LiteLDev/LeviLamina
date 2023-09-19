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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptCanFlyComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptCanFlyComponent();

    // symbol:
    // ?sClassName@ScriptCanFlyComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptCanFlyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
