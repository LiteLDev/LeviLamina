#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptMarkVariantComponent {
public:
    // prevent constructor by default
    ScriptMarkVariantComponent& operator=(ScriptMarkVariantComponent const&);
    ScriptMarkVariantComponent(ScriptMarkVariantComponent const&);
    ScriptMarkVariantComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptMarkVariantComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMarkVariantComponent();

    // symbol:
    // ?sClassName@ScriptMarkVariantComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptMarkVariantComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
