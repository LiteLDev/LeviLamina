#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class MountTameableDefinition;
class MountTamingComponent;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMountTamingComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::MountTamingComponent, ::MountTameableDefinition> {
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
