#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ClassBindingBuilder.h"
#include "mc/external/scripting/Result.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptActorType; }
namespace ScriptModuleMinecraft { class ScriptDynamicPropertiesDefinition; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPropertyRegistry {
public:
    // prevent constructor by default
    ScriptPropertyRegistry& operator=(ScriptPropertyRegistry const&);
    ScriptPropertyRegistry(ScriptPropertyRegistry const&);
    ScriptPropertyRegistry();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptPropertyRegistry(class ServerLevel& level);

    MCAPI class Scripting::Result<void>
    registerEntityTypeDynamicProperties(class Scripting::WeakLifetimeScope, class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&, std::variant<std::string, class ScriptModuleMinecraft::ScriptActorType>);

    MCAPI class Scripting::Result<void>
    registerWorldDynamicProperties(class ScriptModuleMinecraft::ScriptDynamicPropertiesDefinition const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptPropertyRegistry> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
