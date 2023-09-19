#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/EnumBindingBuilder.h"
#include "mc/scripting/modules/minecraft/ScriptScoreboardIdentityType_t.h"

namespace ScriptModuleMinecraft {

class ScriptScoreboardIdentityType {
public:
    // prevent constructor by default
    ScriptScoreboardIdentityType& operator=(ScriptScoreboardIdentityType const&);
    ScriptScoreboardIdentityType(ScriptScoreboardIdentityType const&);
    ScriptScoreboardIdentityType();

public:
    // NOLINTBEGIN
    // symbol:
    // ?bindV010@ScriptScoreboardIdentityType@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@W4ScriptScoreboardIdentityType_t@ScriptModuleMinecraft@@W412@@Scripting@@XZ
    MCAPI static class Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t,
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
    bindV010();

    // symbol:
    // ?bindV1@ScriptScoreboardIdentityType@ScriptModuleMinecraft@@SA?AV?$EnumBindingBuilder@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ScriptScoreboardIdentityType_t@ScriptModuleMinecraft@@@Scripting@@XZ
    MCAPI static class Scripting::
        EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
        bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
