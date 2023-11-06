#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsStunnedComponent {
public:
    // prevent constructor by default
    ScriptIsStunnedComponent& operator=(ScriptIsStunnedComponent const&);
    ScriptIsStunnedComponent(ScriptIsStunnedComponent const&);
    ScriptIsStunnedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsStunnedComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsStunnedComponent();

    // symbol:
    // ?sClassName@ScriptIsStunnedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsStunnedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
