#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/DerivedMovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementSwayComponent : public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<840> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<float> getSwayAmplitude() const;

    MCAPI ::Scripting::Result_deprecated<float> getSwayFrequency() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
