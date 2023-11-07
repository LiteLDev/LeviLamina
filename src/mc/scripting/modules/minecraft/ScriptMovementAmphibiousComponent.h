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

class ScriptMovementAmphibiousComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementAmphibiousComponent& operator=(ScriptMovementAmphibiousComponent const&);
    ScriptMovementAmphibiousComponent(ScriptMovementAmphibiousComponent const&);
    ScriptMovementAmphibiousComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptMovementAmphibiousComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMovementAmphibiousComponent();

    // symbol:
    // ?bind@ScriptMovementAmphibiousComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementAmphibiousComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementAmphibiousComponent>
    bind();

    // symbol:
    // ?bindV010@ScriptMovementAmphibiousComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementAmphibiousComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementAmphibiousComponent>
    bindV010();

    // symbol: ?ComponentId@ScriptMovementAmphibiousComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
