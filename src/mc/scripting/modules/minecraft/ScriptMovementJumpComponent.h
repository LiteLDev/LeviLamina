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

class ScriptMovementJumpComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementJumpComponent& operator=(ScriptMovementJumpComponent const&);
    ScriptMovementJumpComponent(ScriptMovementJumpComponent const&);
    ScriptMovementJumpComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ScriptMovementJumpComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptMovementJumpComponent();

    // symbol:
    // ?bind@ScriptMovementJumpComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementJumpComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementJumpComponent> bind();

    // symbol: ?ComponentId@ScriptMovementJumpComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
