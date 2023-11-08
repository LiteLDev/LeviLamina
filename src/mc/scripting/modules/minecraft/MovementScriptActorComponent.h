#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActorComponent; }
// clang-format on

namespace ScriptModuleMinecraft {

class MovementScriptActorComponent : public ::ScriptModuleMinecraft::ScriptActorComponent {
public:
    // prevent constructor by default
    MovementScriptActorComponent& operator=(MovementScriptActorComponent const&);
    MovementScriptActorComponent(MovementScriptActorComponent const&);
    MovementScriptActorComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MovementScriptActorComponent@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~MovementScriptActorComponent() = default;

    // vIndex: 2, symbol:
    // ?getMaxTurn@MovementScriptActorComponent@ScriptModuleMinecraft@@UEBA?AV?$Result@M$$V@Scripting@@XZ
    virtual class Scripting::Result<float> getMaxTurn() const;

    // symbol:
    // ?bind@MovementScriptActorComponent@ScriptModuleMinecraft@@SA?AV?$ClassBindingBuilder@VMovementScriptActorComponent@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::MovementScriptActorComponent> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
