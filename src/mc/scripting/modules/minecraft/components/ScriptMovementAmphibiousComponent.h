#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/DerivedMovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementAmphibiousComponent : public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<696> {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding _bind();

    MCAPI static ::Scripting::ClassBinding _bindV010();

    MCAPI static ::std::vector<::Scripting::ClassBinding> bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char const*& ComponentId();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
