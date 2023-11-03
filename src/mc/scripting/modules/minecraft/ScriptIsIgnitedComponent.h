#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsIgnitedComponent {
public:
    // prevent constructor by default
    ScriptIsIgnitedComponent& operator=(ScriptIsIgnitedComponent const&);
    ScriptIsIgnitedComponent(ScriptIsIgnitedComponent const&);
    ScriptIsIgnitedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?_isValid@ScriptItemComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol: ??1ScriptIsIgnitedComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptIsIgnitedComponent();

    // symbol:
    // ?sClassName@ScriptIsIgnitedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsIgnitedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
