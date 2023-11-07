#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsDyeableComponent {
public:
    // prevent constructor by default
    ScriptIsDyeableComponent& operator=(ScriptIsDyeableComponent const&);
    ScriptIsDyeableComponent(ScriptIsDyeableComponent const&);
    ScriptIsDyeableComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsDyeableComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsDyeableComponent();

    // symbol:
    // ?sClassName@ScriptIsDyeableComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsDyeableComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
