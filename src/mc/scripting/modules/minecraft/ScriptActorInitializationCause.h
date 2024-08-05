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
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ActorInitializationMethod> bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
