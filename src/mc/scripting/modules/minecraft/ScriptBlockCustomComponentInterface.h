#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptBlockCustomComponentInterface {
public:
    // prevent constructor by default
    ScriptBlockCustomComponentInterface();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlockCustomComponentInterface(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&);

    MCAPI ScriptBlockCustomComponentInterface(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&&);

    MCAPI struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface&
    operator=(struct ScriptModuleMinecraft::ScriptBlockCustomComponentInterface const&);

    MCAPI ~ScriptBlockCustomComponentInterface();

    MCAPI static void bind(class Scripting::ModuleBindingBuilder&);

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
