#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
class ActorDefinition;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorTypes {
public:
    // prevent constructor by default
    ScriptActorTypes& operator=(ScriptActorTypes const&);
    ScriptActorTypes(ScriptActorTypes const&);
    ScriptActorTypes();

public:
    // NOLINTBEGIN
    MCAPI std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptActorType>>
          get(std::string const& actorName);

    MCAPI static void bind(
        class Scripting::ModuleBindingBuilder&                                         moduleBuilder,
        std::unordered_map<std::string, std::unique_ptr<class ActorDefinition>> const& actorDefinitionList
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void registerTypes(class Scripting::WeakLifetimeScope& scope);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
