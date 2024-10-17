#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/actor/ScriptActorLifetimeState.h"

namespace ScriptModuleMinecraft {

class ScriptActorLifetimeStateBinding {
public:
    // prevent constructor by default
    ScriptActorLifetimeStateBinding& operator=(ScriptActorLifetimeStateBinding const&);
    ScriptActorLifetimeStateBinding(ScriptActorLifetimeStateBinding const&);
    ScriptActorLifetimeStateBinding();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptActorLifetimeState>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
