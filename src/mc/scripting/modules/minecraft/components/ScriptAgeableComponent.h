#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/components/ECSScriptActorComponent.h"

// auto generated forward declare list
// clang-format off
class AgeableDefinition;
struct ActorDefinitionFeedItem;
struct AgeableComponent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAgeableComponent
: public ::ScriptModuleMinecraft::ECSScriptActorComponent<::AgeableComponent, ::AgeableDefinition> {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> getDropItems() const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::ActorDefinitionFeedItem>> getFeedItems() const;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
