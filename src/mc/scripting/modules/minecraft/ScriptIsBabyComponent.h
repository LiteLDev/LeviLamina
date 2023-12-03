#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsBabyComponent {
public:
    // prevent constructor by default
    ScriptIsBabyComponent& operator=(ScriptIsBabyComponent const&);
    ScriptIsBabyComponent(ScriptIsBabyComponent const&);
    ScriptIsBabyComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsBabyComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsBabyComponent();

    // vIndex: 1, symbol: ?_isValid@ScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?sClassName@ScriptIsBabyComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsBabyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
