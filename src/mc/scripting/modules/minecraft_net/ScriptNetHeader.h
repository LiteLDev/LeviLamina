#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"

namespace ScriptModuleMinecraftNet {

struct ScriptNetHeader {
public:
    // prevent constructor by default
    ScriptNetHeader();

public:
    // NOLINTBEGIN
    MCAPI ScriptNetHeader(struct ScriptModuleMinecraftNet::ScriptNetHeader const&);

    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader&&);

    MCAPI struct ScriptModuleMinecraftNet::ScriptNetHeader&
    operator=(struct ScriptModuleMinecraftNet::ScriptNetHeader const&);

    MCAPI ~ScriptNetHeader();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptModuleMinecraftNet::ScriptNetHeader> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftNet
