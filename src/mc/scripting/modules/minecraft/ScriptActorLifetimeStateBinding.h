#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptActorLifetimeState.h"

namespace ScriptModuleMinecraft {

class ScriptActorLifetimeStateBinding {
public:
    // prevent constructor by default
    ScriptActorLifetimeStateBinding& operator=(ScriptActorLifetimeStateBinding const&);
    ScriptActorLifetimeStateBinding(ScriptActorLifetimeStateBinding const&);
    ScriptActorLifetimeStateBinding();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptActorLifetimeStateBinding@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptActorLifetimeState@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptActorLifetimeState>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
