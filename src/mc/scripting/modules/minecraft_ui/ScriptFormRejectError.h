#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ErrorBindingBuilder.h"
#include "mc/scripting/modules/minecraft_ui/ScriptFormRejectReason.h"

namespace ScriptModuleMinecraftServerUI {

class ScriptFormRejectError {
public:
    // prevent constructor by default
    ScriptFormRejectError& operator=(ScriptFormRejectError const&);
    ScriptFormRejectError(ScriptFormRejectError const&);
    ScriptFormRejectError();

public:
    // NOLINTBEGIN
    MCAPI explicit ScriptFormRejectError(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);

    MCAPI ~ScriptFormRejectError();

    MCAPI static class Scripting::ErrorBindingBuilder<class ScriptModuleMinecraftServerUI::ScriptFormRejectError>
    bind();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(::ScriptModuleMinecraftServerUI::ScriptFormRejectReason reason);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraftServerUI
