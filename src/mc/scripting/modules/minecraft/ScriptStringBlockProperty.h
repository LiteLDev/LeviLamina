#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/IScriptBlockProperty.h"

// auto generated forward declare list
// clang-format off
class BlockState;
namespace ScriptModuleMinecraft { class IScriptBlockProperty; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptStringBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptStringBlockProperty& operator=(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty(ScriptStringBlockProperty const&);
    ScriptStringBlockProperty();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptStringBlockProperty@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptStringBlockProperty();

    // symbol: ??0ScriptStringBlockProperty@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptStringBlockProperty(class ScriptModuleMinecraft::ScriptStringBlockProperty&& rhs);

    // symbol:
    // ??0ScriptStringBlockProperty@ScriptModuleMinecraft@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockState@@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@3@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI
    ScriptStringBlockProperty(std::string name, class BlockState const& blockState, std::vector<std::string>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>);

    // symbol:
    // ?getState@ScriptStringBlockProperty@ScriptModuleMinecraft@@QEBA?AV?$Result@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::string> getState() const;

    // symbol: ??4ScriptStringBlockProperty@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptStringBlockProperty&
    operator=(class ScriptModuleMinecraft::ScriptStringBlockProperty&& rhs);

    // symbol:
    // ?setState@ScriptStringBlockProperty@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class Scripting::Result<void> setState(std::string state);

    // symbol:
    // ?bind@ScriptStringBlockProperty@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptStringBlockProperty@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptStringBlockProperty> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
