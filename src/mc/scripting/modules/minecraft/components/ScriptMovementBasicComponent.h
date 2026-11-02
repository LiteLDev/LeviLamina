#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/DerivedMovementScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMovementBasicComponent : public ::ScriptModuleMinecraft::DerivedMovementScriptActorComponent<800> {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding _bind();

    MCNAPI static ::Scripting::ClassBinding _bindV010();

    MCNAPI static ::std::vector<::Scripting::ClassBinding> bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
