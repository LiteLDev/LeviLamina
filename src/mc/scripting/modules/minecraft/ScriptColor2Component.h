#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/PaletteColor.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptColor2Component {
public:
    // prevent constructor by default
    ScriptColor2Component& operator=(ScriptColor2Component const&);
    ScriptColor2Component(ScriptColor2Component const&);
    ScriptColor2Component();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptColor2Component@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptColor2Component() = default;

    // vIndex: 1, symbol: ?_isValid@AttributeScriptActorComponent@ScriptModuleMinecraft@@MEBA_NXZ
    virtual bool _isValid() const;

    // symbol:
    // ?getValue@ScriptColor2Component@ScriptModuleMinecraft@@QEBA?AV?$Result@W4PaletteColor@@$$V@Scripting@@AEBVActor@@@Z
    MCAPI class Scripting::Result<::PaletteColor> getValue(class Actor const&) const;

    // symbol:
    // ?sClassName@ScriptColor2Component@ScriptModuleMinecraft@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const sClassName;

    // symbol: ?sComponentId@ScriptColor2Component@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* sComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
