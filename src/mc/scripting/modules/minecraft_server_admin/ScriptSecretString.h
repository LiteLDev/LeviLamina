#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerAdmin {

class ScriptSecretString {
public:
    // prevent constructor by default
    ScriptSecretString(ScriptSecretString const&);
    ScriptSecretString();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptSecretString(std::string);

    MCAPI class ScriptModuleMinecraftServerAdmin::ScriptSecretString&
    operator=(class ScriptModuleMinecraftServerAdmin::ScriptSecretString&&);

    MCAPI class ScriptModuleMinecraftServerAdmin::ScriptSecretString&
    operator=(class ScriptModuleMinecraftServerAdmin::ScriptSecretString const&);

    MCAPI bool operator==(class ScriptModuleMinecraftServerAdmin::ScriptSecretString const&) const;

    MCAPI ~ScriptSecretString();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerAdmin::ScriptSecretString>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerAdmin
