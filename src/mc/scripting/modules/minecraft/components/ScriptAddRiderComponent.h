#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
struct AddRiderComponent;
namespace SharedTypes::v1_21_130 { struct AddRiderComponentDefinition; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAddRiderComponent
: public ::ScriptModuleMinecraft::
      ECSScriptActorComponent<::AddRiderComponent, ::SharedTypes::v1_21_130::AddRiderComponentDefinition> {};

} // namespace ScriptModuleMinecraft
