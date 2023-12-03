#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsTamedComponent {
public:
    // prevent constructor by default
    ScriptIsTamedComponent& operator=(ScriptIsTamedComponent const&);
    ScriptIsTamedComponent(ScriptIsTamedComponent const&);
    ScriptIsTamedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsTamedComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsTamedComponent();

    // vIndex: 1, symbol: ?_isValid@ScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?sClassName@ScriptIsTamedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsTamedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
