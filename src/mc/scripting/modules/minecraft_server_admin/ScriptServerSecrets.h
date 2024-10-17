#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class ScriptPackConfigurationManager;
namespace ScriptModuleMinecraftServerAdmin { class ScriptSecretString; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace ScriptModuleMinecraftServerAdmin {

class ScriptServerSecrets {
public:
    // prevent constructor by default
    ScriptServerSecrets& operator=(ScriptServerSecrets const&);
    ScriptServerSecrets(ScriptServerSecrets const&);
    ScriptServerSecrets();

public:
    // NOLINTBEGIN
    MCAPI ScriptServerSecrets(
        class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager> packConfigManager,
        struct Scripting::ContextConfig const&                               contextConfig
    );

    MCAPI std::optional<class ScriptModuleMinecraftServerAdmin::ScriptSecretString> get(std::string const& name) const;

    MCAPI std::vector<std::string> getAllSecretNames() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptServerSecrets>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(
        class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager> packConfigManager,
        struct Scripting::ContextConfig const&                               contextConfig
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerAdmin
