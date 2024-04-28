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
    // vIndex: 0, symbol: __gen_??1ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIsHiddenWhenInvisibleComponent() = default;

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?sClassName@ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptIsHiddenWhenInvisibleComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
