#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptFireImmuneComponent {
public:
    // prevent constructor by default
    ScriptFireImmuneComponent& operator=(ScriptFireImmuneComponent const&);
    ScriptFireImmuneComponent(ScriptFireImmuneComponent const&);
    ScriptFireImmuneComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptFireImmuneComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptFireImmuneComponent();

    // symbol:
    // ?sClassName@ScriptFireImmuneComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptFireImmuneComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
