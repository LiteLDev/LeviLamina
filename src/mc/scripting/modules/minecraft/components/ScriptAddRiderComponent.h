#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
struct AddRiderComponent;
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent
: public ::ScriptModuleMinecraft::
      ECSScriptActorComponent<::AddRiderComponent, ::SharedTypes::v1_21_130::AddRiderComponentDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::string> getEntityType() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getSpawnEvent() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
