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

class ScriptBlockSnowContainerComponent : public ::ScriptModuleMinecraft::BaseScriptBlockLiquidContainerComponent {
public:
    // prevent constructor by default
    ScriptBlockSnowContainerComponent& operator=(ScriptBlockSnowContainerComponent const&);
    ScriptBlockSnowContainerComponent(ScriptBlockSnowContainerComponent const&);
    ScriptBlockSnowContainerComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptBlockSnowContainerComponent() = default;

    // symbol:
    // ?bind@ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlockSnowContainerComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptBlockSnowContainerComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
