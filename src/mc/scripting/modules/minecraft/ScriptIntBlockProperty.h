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

class ScriptIntBlockProperty : public ::ScriptModuleMinecraft::IScriptBlockProperty {
public:
    // prevent constructor by default
    ScriptIntBlockProperty& operator=(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty(ScriptIntBlockProperty const&);
    ScriptIntBlockProperty();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptIntBlockProperty@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptIntBlockProperty();

    // symbol: ??0ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAA@$$QEAV01@@Z
    MCAPI ScriptIntBlockProperty(class ScriptModuleMinecraft::ScriptIntBlockProperty&& rhs);

    // symbol:
    // ??0ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockState@@V?$vector@HV?$allocator@H@std@@@3@V?$StrongTypedObjectHandle@VScriptBlockPermutation@ScriptModuleMinecraft@@@Scripting@@@Z
    MCAPI
    ScriptIntBlockProperty(std::string name, class BlockState const& blockState, std::vector<int>, class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>);

    // symbol: ?getState@ScriptIntBlockProperty@ScriptModuleMinecraft@@QEBA?AV?$Result@H$$V@Scripting@@XZ
    MCAPI class Scripting::Result<int> getState() const;

    // symbol: ??4ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptIntBlockProperty&
    operator=(class ScriptModuleMinecraft::ScriptIntBlockProperty&& rhs);

    // symbol: ?setState@ScriptIntBlockProperty@ScriptModuleMinecraft@@QEAA?AV?$Result@X$$V@Scripting@@H@Z
    MCAPI class Scripting::Result<void> setState(int state);

    // symbol:
    // ?bind@ScriptIntBlockProperty@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptIntBlockProperty@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptIntBlockProperty> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
