#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
enum class ActorDamageCause;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptActorDamageCause {

public:
    // prevent constructor by default
    ScriptActorDamageCause& operator=(ScriptActorDamageCause const&) = delete;
    ScriptActorDamageCause(ScriptActorDamageCause const&)            = delete;
    ScriptActorDamageCause()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?bindV010\@ScriptActorDamageCause\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, std::string> bindV010();
    /**
     * @symbol
     * ?bindV1\@ScriptActorDamageCause\@ScriptModuleMinecraft\@\@SA?AV?$EnumBindingBuilder\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4ActorDamageCause\@\@\@Scripting\@\@XZ
     */
    MCAPI static class Scripting::EnumBindingBuilder<std::string, enum class ActorDamageCause> bindV1();
    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
