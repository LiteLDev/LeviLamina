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

class ScriptMovementFlyComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementFlyComponent& operator=(ScriptMovementFlyComponent const&) = delete;
    ScriptMovementFlyComponent(ScriptMovementFlyComponent const&)            = delete;
    ScriptMovementFlyComponent()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptMovementFlyComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptMovementFlyComponent();

    // symbol:
    // ?bind@ScriptMovementFlyComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementFlyComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementFlyComponent> bind();

    // symbol: ?ComponentId@ScriptMovementFlyComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
