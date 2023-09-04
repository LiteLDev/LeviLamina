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
    ScriptMovementJumpComponent& operator=(ScriptMovementJumpComponent const&) = delete;
    ScriptMovementJumpComponent(ScriptMovementJumpComponent const&)            = delete;
    ScriptMovementJumpComponent()                                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptMovementJumpComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptMovementJumpComponent();

    // symbol:
    // ?bind@ScriptMovementJumpComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementJumpComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementJumpComponent> bind();

    // symbol: ?ComponentId@ScriptMovementJumpComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
