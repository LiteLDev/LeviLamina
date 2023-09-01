#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockSnowContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockSnowContainerComponent& operator=(ScriptBlockSnowContainerComponent const&) = delete;
    ScriptBlockSnowContainerComponent(ScriptBlockSnowContainerComponent const&)            = delete;
    ScriptBlockSnowContainerComponent()                                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockSnowContainerComponent();

    // symbol: ??4ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent&&);

    // symbol:
    // ?bind@ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent>
    bind();

    // symbol: ?ComponentId@ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
