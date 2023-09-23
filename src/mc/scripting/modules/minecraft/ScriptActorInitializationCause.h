#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/world/actor/Actor.h"

namespace ScriptModuleMinecraft {

class ScriptActorInitializationCause {
public:
    // prevent constructor by default
    ScriptActorInitializationCause& operator=(ScriptActorInitializationCause const&);
    ScriptActorInitializationCause(ScriptActorInitializationCause const&);
    ScriptActorInitializationCause();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bind@ScriptActorInitializationCause@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4InitializationMethod@Actor@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::Actor::InitializationMethod> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
