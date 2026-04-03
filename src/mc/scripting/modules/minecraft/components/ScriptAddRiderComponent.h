#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
struct AddRiderComponent;
namespace Scripting { struct ClassBinding; }
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent
: public ::ScriptModuleMinecraft::
      ECSScriptActorComponent<::AddRiderComponent, ::SharedTypes::v1_21_130::AddRiderComponentDefinition> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptAddRiderComponent() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::string> getEntityType() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getSpawnEvent() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
