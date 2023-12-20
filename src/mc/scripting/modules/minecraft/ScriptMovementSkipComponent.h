#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementSkipComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementSkipComponent& operator=(ScriptMovementSkipComponent const&);
    ScriptMovementSkipComponent(ScriptMovementSkipComponent const&);
    ScriptMovementSkipComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptMovementSkipComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMovementSkipComponent();

    // symbol:
    // ?bind@ScriptMovementSkipComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementSkipComponent@ScriptModuleMinecraft@@@Scripting@@AEAVScriptComponentTypeEnumBuilder@2@@Z
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementSkipComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    // symbol: ?ComponentId@ScriptMovementSkipComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
