#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentityType_t.h"

namespace ScriptModuleMinecraft {

struct ScriptScoreboardIdentityType {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t,
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
    bindV010();

    MCAPI static ::Scripting::EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
    bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
