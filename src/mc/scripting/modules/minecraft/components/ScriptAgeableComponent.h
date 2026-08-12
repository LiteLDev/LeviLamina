#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class AgeableDefinition;
struct AgeableComponent;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::AgeableComponent, ::AgeableDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getDropItems() const;

    MCAPI ::Scripting::Result_deprecated<::ActorDefinitionTrigger> getGrowUp() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getTransformToItem() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
