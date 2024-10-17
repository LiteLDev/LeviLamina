#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/MovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementHoverComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementHoverComponent& operator=(ScriptMovementHoverComponent const&);
    ScriptMovementHoverComponent(ScriptMovementHoverComponent const&);
    ScriptMovementHoverComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMovementHoverComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementHoverComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool _isValid$() const;

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
