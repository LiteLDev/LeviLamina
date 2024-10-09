#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptModalFormResponse {
public:
    // prevent constructor by default
    ScriptModalFormResponse& operator=(ScriptModalFormResponse const&);
    ScriptModalFormResponse(ScriptModalFormResponse const&);
    ScriptModalFormResponse();

public:
    // NOLINTBEGIN
    MCAPI class ScriptModuleMinecraftServerUI::ScriptModalFormResponse&
    operator=(class ScriptModuleMinecraftServerUI::ScriptModalFormResponse&&);

    MCAPI ~ScriptModalFormResponse();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptModalFormResponse>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
