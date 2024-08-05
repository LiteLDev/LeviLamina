#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/external/scripting/ClassBindingBuilder.h"

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
    MCAPI
    ScriptServerSecrets(class Bedrock::NonOwnerPointer<class ScriptPackConfigurationManager>, struct Scripting::ContextConfig const&);

    MCAPI std::optional<class ScriptModuleMinecraftServerAdmin::ScriptSecretString> get(std::string const& name) const;

    MCAPI std::vector<std::string> getAllSecretNames() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptServerSecrets>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerAdmin
