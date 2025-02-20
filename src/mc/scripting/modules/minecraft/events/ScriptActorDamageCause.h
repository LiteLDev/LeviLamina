#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"

namespace ScriptModuleMinecraft {

struct ScriptActorDamageCause {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::std::string> bindV010();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::SharedTypes::Legacy::ActorDamageCause> bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
