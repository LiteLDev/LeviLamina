#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetResponse {
public:
    // prevent constructor by default
    ScriptNetResponse& operator=(ScriptNetResponse const&);
    ScriptNetResponse(ScriptNetResponse const&);
    ScriptNetResponse();

public:
    // NOLINTBEGIN
    MCAPI ScriptNetResponse(struct ScriptModuleMinecraftNet::ScriptNetResponse&&);

    MCAPI struct ScriptModuleMinecraftNet::ScriptNetResponse&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetResponse&&);

    MCAPI ~ScriptNetResponse();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetResponse> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
