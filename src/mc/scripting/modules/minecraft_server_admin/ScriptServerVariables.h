#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct JSON; }
// clang-format on

namespace ScriptModuleMinecraftServerAdmin {

class ScriptServerVariables {
public:
    // prevent constructor by default
    ScriptServerVariables& operator=(ScriptServerVariables const&);
    ScriptServerVariables(ScriptServerVariables const&);
    ScriptServerVariables();

public:
    // NOLINTBEGIN
    MCAPI ScriptServerVariables(
        class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager> packConfigManager,
        struct Scripting::ContextConfig const&                               contextConfig
    );

    MCAPI std::optional<struct Scripting::JSON> get(std::string const& name) const;

    MCAPI std::vector<std::string> getAllVariableNames() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptServerVariables>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerAdmin
