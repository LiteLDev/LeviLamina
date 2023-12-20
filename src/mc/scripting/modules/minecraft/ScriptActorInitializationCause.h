#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorInitializationMethod.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

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
    // ?bind@ScriptActorInitializationCause@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorInitializationMethod@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ActorInitializationMethod> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
