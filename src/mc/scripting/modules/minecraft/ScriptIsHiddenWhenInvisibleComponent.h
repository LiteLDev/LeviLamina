#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptIsHiddenWhenInvisibleComponent {
public:
    // prevent constructor by default
    ScriptIsHiddenWhenInvisibleComponent& operator=(ScriptIsHiddenWhenInvisibleComponent const&);
    ScriptIsHiddenWhenInvisibleComponent(ScriptIsHiddenWhenInvisibleComponent const&);
    ScriptIsHiddenWhenInvisibleComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsHiddenWhenInvisibleComponent();

    // symbol:
    // ?sClassName@ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
