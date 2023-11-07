#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptVariantComponent {
public:
    // prevent constructor by default
    ScriptVariantComponent& operator=(ScriptVariantComponent const&);
    ScriptVariantComponent(ScriptVariantComponent const&);
    ScriptVariantComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptVariantComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptVariantComponent();

    // symbol:
    // ?sClassName@ScriptVariantComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptVariantComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
