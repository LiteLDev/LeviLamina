#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsShearedComponent {
public:
    // prevent constructor by default
    ScriptIsShearedComponent& operator=(ScriptIsShearedComponent const&);
    ScriptIsShearedComponent(ScriptIsShearedComponent const&);
    ScriptIsShearedComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsShearedComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsShearedComponent();

    // symbol:
    // ?sClassName@ScriptIsShearedComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsShearedComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
