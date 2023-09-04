#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsHiddenWhenInvisibleComponent {
public:
    // prevent constructor by default
    ScriptIsHiddenWhenInvisibleComponent& operator=(ScriptIsHiddenWhenInvisibleComponent const&) = delete;
    ScriptIsHiddenWhenInvisibleComponent(ScriptIsHiddenWhenInvisibleComponent const&)            = delete;
    ScriptIsHiddenWhenInvisibleComponent()                                                       = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@BaseScriptBlockLiquidContainerComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptIsHiddenWhenInvisibleComponent();

    // symbol:
    // ?sClassName@ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
