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
    MCAPI static class Scripting::EnumBindingBuilder<
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t,
        ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
    bindV010();

    MCAPI static class Scripting::
        EnumBindingBuilder<std::string, ::ScriptModuleMinecraft::ScriptScoreboardIdentityType_t>
        bindV1();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
