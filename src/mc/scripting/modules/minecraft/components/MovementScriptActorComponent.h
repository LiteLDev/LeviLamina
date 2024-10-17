#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/ScriptActorComponent.h"

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
    // vIndex: 0
    virtual ~MovementScriptActorComponent() = default;

    // vIndex: 2
    virtual class Scripting::Result<float> getMaxTurn() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::MovementScriptActorComponent> bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Scripting::Result<float> getMaxTurn$() const;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
