#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/components/AttributeScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class AttributeScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementComponent : public ::ScriptModuleMinecraft::AttributeScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementComponent& operator=(ScriptMovementComponent const&);
    ScriptMovementComponent(ScriptMovementComponent const&);
    ScriptMovementComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMovementComponent() = default;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder& componentTypeEnumBuilder);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI static char const* const& ComponentId();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
