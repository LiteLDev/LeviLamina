#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class MountTamingComponent;
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_26_50 { struct MountTamingComponentDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptMountTamingComponent
: public ::ScriptModuleMinecraft::
      ECSScriptActorComponent<::MountTamingComponent, ::SharedTypes::v1_26_50::MountTamingComponentDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> isTamed() const;

    MCNAPI ::Scripting::Result_deprecated<bool> isTamedToPlayer() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& ComponentId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
