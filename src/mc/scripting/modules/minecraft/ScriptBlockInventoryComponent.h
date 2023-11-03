#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/external/scripting/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockInventoryComponentContainer; }
namespace ScriptModuleMinecraft { class ScriptContainerWrapper; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockInventoryComponent : public ::ScriptModuleMinecraft::BaseScriptBlockComponent {
public:
    // prevent constructor by default
    ScriptBlockInventoryComponent& operator=(ScriptBlockInventoryComponent const&);
    ScriptBlockInventoryComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptBlockInventoryComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptBlockInventoryComponent();

    // symbol: ??0ScriptBlockInventoryComponent@ScriptModuleMinecraft@@QEAA@AEBV01@@Z
    MCAPI ScriptBlockInventoryComponent(class ScriptModuleMinecraft::ScriptBlockInventoryComponent const&);

    // symbol:
    // ?getOrCreateContainer@ScriptBlockInventoryComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptContainerWrapper@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptContainerWrapper>>>
    getOrCreateContainer();

    // symbol:
    // ?getOrCreateContainerV010@ScriptBlockInventoryComponent@ScriptModuleMinecraft@@QEAA?AV?$Result@V?$optional@V?$StrongTypedObjectHandle@VScriptBlockInventoryComponentContainer@ScriptModuleMinecraft@@@Scripting@@@std@@$$V@Scripting@@XZ
    MCAPI class Scripting::Result<std::optional<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockInventoryComponentContainer>>>
    getOrCreateContainerV010();

    // symbol: ??4ScriptBlockInventoryComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockInventoryComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockInventoryComponent&&);

    // symbol:
    // ?bind@ScriptBlockInventoryComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockInventoryComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockInventoryComponent>
    bind();

    // symbol: ?ComponentId@ScriptBlockInventoryComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
