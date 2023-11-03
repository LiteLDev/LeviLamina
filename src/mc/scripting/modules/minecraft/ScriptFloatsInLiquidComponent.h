#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFloatsInLiquidComponent {
public:
    // prevent constructor by default
    ScriptFloatsInLiquidComponent& operator=(ScriptFloatsInLiquidComponent const&);
    ScriptFloatsInLiquidComponent(ScriptFloatsInLiquidComponent const&);
    ScriptFloatsInLiquidComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptFloatsInLiquidComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptFloatsInLiquidComponent();

    // symbol:
    // ?sClassName@ScriptFloatsInLiquidComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptFloatsInLiquidComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
