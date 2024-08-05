#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"
#include "mc/scripting/modules/minecraft/MovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class MovementScriptActorComponent; }
namespace ScriptModuleMinecraft { class ScriptComponentTypeEnumBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementGlideComponent : public ::ScriptModuleMinecraft::MovementScriptActorComponent {
public:
    // prevent constructor by default
    ScriptMovementGlideComponent& operator=(ScriptMovementGlideComponent const&);
    ScriptMovementGlideComponent(ScriptMovementGlideComponent const&);
    ScriptMovementGlideComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptMovementGlideComponent() = default;

    // vIndex: 1
    virtual bool _isValid() const;

    MCAPI class Scripting::Result<float> getSpeedWhenTurning() const;

    MCAPI class Scripting::Result<float> getStartSpeed() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptMovementGlideComponent>
    bind(class ScriptModuleMinecraft::ScriptComponentTypeEnumBuilder&);

    MCAPI static char const* ComponentId;

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
