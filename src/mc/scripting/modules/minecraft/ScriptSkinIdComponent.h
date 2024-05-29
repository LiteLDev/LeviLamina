#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptSkinIdComponent {
public:
    // prevent constructor by default
    ScriptSkinIdComponent& operator=(ScriptSkinIdComponent const&);
    ScriptSkinIdComponent(ScriptSkinIdComponent const&);
    ScriptSkinIdComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptSkinIdComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptSkinIdComponent() = default;

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?sClassName@ScriptSkinIdComponent@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptSkinIdComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
