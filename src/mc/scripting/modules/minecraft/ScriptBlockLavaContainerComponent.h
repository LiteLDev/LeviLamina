#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/BaseScriptBlockLiquidContainerComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class BaseScriptBlockLiquidContainerComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlockLavaContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockLavaContainerComponent& operator=(ScriptBlockLavaContainerComponent const&);
    ScriptBlockLavaContainerComponent(ScriptBlockLavaContainerComponent const&);
    ScriptBlockLavaContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptBlockLavaContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockLavaContainerComponent();

    // symbol: ??4ScriptBlockLavaContainerComponent@ScriptModuleMinecraft@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class ScriptModuleMinecraft::ScriptBlockLavaContainerComponent&
    operator=(class ScriptModuleMinecraft::ScriptBlockLavaContainerComponent&&);

    // symbol:
    // ?bind@ScriptBlockLavaContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockLavaContainerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockLavaContainerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptBlockLavaContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
