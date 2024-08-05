#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptStructureCreateOptions {
public:
    // prevent constructor by default
    ScriptStructureCreateOptions& operator=(ScriptStructureCreateOptions const&);
    ScriptStructureCreateOptions(ScriptStructureCreateOptions const&);
    ScriptStructureCreateOptions();

public:
    // NOLINTBEGIN
    MCAPI static class Scripting::InterfaceBindingBuilder<struct ScriptModuleMinecraft::ScriptStructureCreateOptions>
    bind();

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
