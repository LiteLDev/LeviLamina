#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementGenericComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementGenericComponent& operator=(ScriptMovementGenericComponent const&);
    ScriptMovementGenericComponent(ScriptMovementGenericComponent const&);
    ScriptMovementGenericComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptMovementGenericComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMovementGenericComponent();

    // symbol:
    // ?bind@ScriptMovementGenericComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementGenericComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementGenericComponent>
    bind();

    // symbol: ?ComponentId@ScriptMovementGenericComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
