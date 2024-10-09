#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/actor/ActorDamageCause.h"

namespace ScriptModuleMinecraft {

class ScriptActorDamageCause {
public:
    // prevent constructor by default
    ScriptActorDamageCause& operator=(ScriptActorDamageCause const&);
    ScriptActorDamageCause(ScriptActorDamageCause const&);
    ScriptActorDamageCause();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::EnumBindingBuilder<std::string, std::string> bindV010();

    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ActorDamageCause> bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
