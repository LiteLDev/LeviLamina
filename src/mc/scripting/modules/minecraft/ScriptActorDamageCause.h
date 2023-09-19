#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/external/scripting/EnumBindingBuilder.h"

namespace ScriptModuleMinecraft {

class ScriptActorDamageCause {
public:
    // prevent constructor by default
    ScriptActorDamageCause& operator=(ScriptActorDamageCause const&);
    ScriptActorDamageCause(ScriptActorDamageCause const&);
    ScriptActorDamageCause();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bindV010@ScriptActorDamageCause@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, std::string> bindV010();

    // symbol:
    // ?bindV1@ScriptActorDamageCause@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorDamageCause@@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<std::string, ::ActorDamageCause> bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
