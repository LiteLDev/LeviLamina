#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/world/actor/ActorDamageCause.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDamageCause {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::std::string> bindV010();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::ActorDamageCause> bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
