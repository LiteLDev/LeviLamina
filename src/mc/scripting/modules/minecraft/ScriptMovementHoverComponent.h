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

class ScriptMovementHoverComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementHoverComponent& operator=(ScriptMovementHoverComponent const&) = delete;
    ScriptMovementHoverComponent(ScriptMovementHoverComponent const&)            = delete;
    ScriptMovementHoverComponent()                                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptMovementHoverComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptMovementHoverComponent();

    // symbol:
    // ?bind@ScriptMovementHoverComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementHoverComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementHoverComponent> bind();

    // symbol: ?ComponentId@ScriptMovementHoverComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
