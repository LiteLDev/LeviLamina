#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/DerivedMovementScriptActorComponent.h"

namespace ScriptModuleMinecraft {

class ScriptMovementGlideComponent : public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<768> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<float> getSpeedWhenTurning() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
