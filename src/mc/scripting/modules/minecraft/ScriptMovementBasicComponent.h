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

class ScriptMovementBasicComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementBasicComponent& operator=(ScriptMovementBasicComponent const&) = delete;
    ScriptMovementBasicComponent(ScriptMovementBasicComponent const&)            = delete;
    ScriptMovementBasicComponent()                                               = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // symbol: ??1ScriptMovementBasicComponent@ScriptModuleMinecraft@@UEAA@XZ
    MCVAPI ~ScriptMovementBasicComponent();

    // symbol:
    // ?bind@ScriptMovementBasicComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementBasicComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementBasicComponent> bind();

    // symbol:
    // ?bindV010@ScriptMovementBasicComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VScriptMovementBasicComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementBasicComponent>
    bindV010();

    // symbol: ?ComponentId@ScriptMovementBasicComponent@ScriptModuleMinecraft@@2PEBDEB
    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
