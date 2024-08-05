#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/ErrorBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptInvalidContainerSlotError {
public:
    // prevent constructor by default
    ScriptInvalidContainerSlotError& operator=(ScriptInvalidContainerSlotError const&);
    ScriptInvalidContainerSlotError(ScriptInvalidContainerSlotError const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptInvalidContainerSlotError();

    MCAPI ~ScriptInvalidContainerSlotError();

    MCAPI static class Scripting::ErrorBindingBuilder<struct ScriptModuleMinecraft::ScriptInvalidContainerSlotError>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
