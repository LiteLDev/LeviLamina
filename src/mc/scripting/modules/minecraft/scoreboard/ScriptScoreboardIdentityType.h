#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptScoreboardIdentityType_t.h"

namespace ScriptModuleMinecraft {

struct ScriptScoreboardIdentityType {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t,
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
    bindV010();

    MCNAPI static ::Scripting::
        EnumBindingBuilder<::std::string, ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
        bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
